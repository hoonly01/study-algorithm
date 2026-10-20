-- 코드를 입력하세요
SELECT  I.REST_ID, I.REST_NAME, I.FOOD_TYPE, I.FAVORITES, I.ADDRESS,
        R.SCORE
FROM    REST_INFO AS I

JOIN (
    SELECT  REST_ID, ROUND(AVG(REVIEW_SCORE), 2) AS SCORE
    FROM    REST_REVIEW
    GROUP BY REST_ID
    ) AS R 
ON      I.REST_ID = R.REST_ID

WHERE   I.ADDRESS LIKE '서울%'
ORDER BY    R.SCORE DESC, I.FAVORITES DESC


-- 서울에 위치한 식당들의 식당 ID, 식당 이름, 음식 종류, 즐겨찾기수, 주소, 리뷰 평균 점수
-- 리뷰 평균점수는 소수점 세 번째 자리에서 반올림
-- 평균점수를 기준으로 내림차순
-- 즐겨찾기수를 기준으로 내림차순