// 목적지 : 오름차순으로 도착해야 함 (간격 == 1)
// 대기줄 : 내림차순으로 저장되어야 함 (간격 상관 없음)
// 시작줄 : 랜덤 
// 로직 순서 
// 1 : 먼저 시작줄에 있는 top이 목적지로 갈 수 있는 지 체크 -> 가능하면 굿, 불가능 시 2로
// 2 : 대기줄로 넣을 수 있는 지 확인 -> 가능하면 top에 저장, 불가능 시 실패
// 3 : 1,2를 반복하다가 시작줄이 없어지면 대기줄 스택을 순차 pop해서 목적지로 이동. -> 되면 굿, 불가능 시 실패 
































































