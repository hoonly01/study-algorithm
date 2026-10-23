-- 코드를 입력하세요
WITH AVAIL AS
(
    SELECT  car.CAR_ID, car.CAR_TYPE, car.DAILY_FEE
    FROM    CAR_RENTAL_COMPANY_CAR AS car    
    WHERE   (car.CAR_TYPE = '세단' OR  car.CAR_TYPE = 'SUV')
    AND     NOT EXISTS (
                SELECT  1
                FROM    CAR_RENTAL_COMPANY_RENTAL_HISTORY AS h
                WHERE   h.CAR_ID = car.CAR_ID
                AND     h.START_DATE <= '2022-11-30'
                AND     h.END_DATE >= '2022-11-01'
            )
)
    
SELECT  a.CAR_ID,
        a.CAR_TYPE,
        ROUND(a.DAILY_FEE * 30 * (1 - p.DISCOUNT_RATE / 100)) AS FEE
FROM    AVAIL AS a
JOIN    CAR_RENTAL_COMPANY_DISCOUNT_PLAN AS p
ON      a.CAR_TYPE = p.CAR_TYPE
AND     p.DURATION_TYPE LIKE '%30%'
WHERE   ROUND(a.DAILY_FEE * 30 * (1 - p.DISCOUNT_RATE / 100)) >= 500000
AND     ROUND(a.DAILY_FEE * 30 * (1 - p.DISCOUNT_RATE / 100)) < 2000000
ORDER BY FEE DESC, a.CAR_TYPE ASC, a.CAR_ID DESC
