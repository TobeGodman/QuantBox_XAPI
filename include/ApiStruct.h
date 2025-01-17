#ifndef _API_STRUCT_H_
#define _API_STRUCT_H_

#include "ApiDataType.h"
#include "ApiEnum.h"


struct PositionField
{

};

struct OrderField
{
	InstrumentIDType InstrumentID;
	ExchangeIDType	ExchangeID;
	OrderType Type;
	OrderSide Side;
	QtyType Qty;
	PriceType Price;
	OpenCloseType OpenClose;
	HedgeFlagType HedgeFlag;

	PriceType StopPx;
	TimeInForce TimeInForce;

	OrderStatus Status;
	ExecType ExecType;
	QtyType LeavesQty;
	QtyType CumQty;
	PriceType AvgPx;
	ErrorIDType ErrorID;
	ErrorMsgType Text;

	OrderIDType ID;
	OrderIDType OrderID;
	long DateTime;
	//// 预留字段，支持bool,int,long,double
	//double double1;
	//double double2;
	//// 是否要进行扩展属性的支持？
	//void* ptr1;
	//// 是否需要从底层传入更多信息，比如说OrderSysID
};

struct TradeField
{
	InstrumentIDType InstrumentID;
	ExchangeIDType	ExchangeID;

	OrderSide Side;
	QtyType Qty;
	PriceType Price;
	OpenCloseType OpenClose;
	HedgeFlagType HedgeFlag;
	MoneyType Commission;
	TimeType Time;
	OrderIDType ID;
	TradeIDType TradeID;
};

struct ServerInfoField
{
	bool IsUsingUdp;
	bool IsMulticast;
	int	TopicId;
	ResumeType	Resume;
	BrokerIDType	BrokerID;
	ProductInfoType	UserProductInfo;
	AuthCodeType	AuthCode;
	AddressType	Address;
};

struct ConfigInfoField
{

};

// 用户信息
struct UserInfoField
{
	///用户代码
	UserIDType	UserID;
	///密码
	PasswordType	Password;
};


// 错误信息
struct ErrorField
{
	// 错误代码
	ErrorIDType	ErrorID;
	// 错误信息
	ErrorMsgType	ErrorMsg;
};


// 登录回报
struct RspUserLoginField
{
	///交易日
	DateType	TradingDay;
	// 时间
	TimeType	LoginTime;
	// 会话ID
	SessionIDType	SessionID;
	// 错误代码
	ErrorIDType	ErrorID;
	// 错误信息
	ErrorMsgType	ErrorMsg;
};



///深度行情
struct DepthMarketDataField
{
	/////交易日
	//TThostFtdcDateType	TradingDay;
	/////最后修改时间
	//TThostFtdcTimeType	UpdateTime;
	/////最后修改毫秒
	//TThostFtdcMillisecType	UpdateMillisec;
	/////业务日期
	//TThostFtdcDateType	ActionDay;

	///交易所时间
	DateTimeType		ExchangeTime;

	///唯一符号
	SymbolType			Symbol;
	///合约代码
	InstrumentIDType	InstrumentID;
	///交易所代码
	ExchangeIDType	ExchangeID;

	///最新价
	PriceType	LastPrice;
	///数量
	LargeVolumeType	Volume;
	///成交金额
	MoneyType	Turnover;
	///持仓量
	LargeVolumeType	OpenInterest;
	///当日均价
	PriceType	AveragePrice;


	///今开盘
	PriceType	OpenPrice;
	///最高价
	PriceType	HighestPrice;
	///最低价
	PriceType	LowestPrice;
	///今收盘
	PriceType	ClosePrice;
	///本次结算价
	PriceType	SettlementPrice;

	///涨停板价
	PriceType	UpperLimitPrice;
	///跌停板价
	PriceType	LowerLimitPrice;
	///昨收盘
	PriceType	PreClosePrice;
	///上次结算价
	PriceType	PreSettlementPrice;
	///昨持仓量
	LargeVolumeType	PreOpenInterest;


	///申买价一
	PriceType	BidPrice1;
	///申买量一
	VolumeType	BidVolume1;
	///申卖价一
	PriceType	AskPrice1;
	///申卖量一
	VolumeType	AskVolume1;
	///申买价二
	PriceType	BidPrice2;
	///申买量二
	VolumeType	BidVolume2;
	///申卖价二
	PriceType	AskPrice2;
	///申卖量二
	VolumeType	AskVolume2;
	///申买价三
	PriceType	BidPrice3;
	///申买量三
	VolumeType	BidVolume3;
	///申卖价三
	PriceType	AskPrice3;
	///申卖量三
	VolumeType	AskVolume3;
	///申买价四
	PriceType	BidPrice4;
	///申买量四
	VolumeType	BidVolume4;
	///申卖价四
	PriceType	AskPrice4;
	///申卖量四
	VolumeType	AskVolume4;
	///申买价五
	PriceType	BidPrice5;
	///申买量五
	VolumeType	BidVolume5;
	///申卖价五
	PriceType	AskPrice5;
	///申卖量五
	VolumeType	AskVolume5;
};



///发给做市商的询价请求
struct QuoteRequestField
{
	///唯一符号
	SymbolType			Symbol;
	///合约代码
	InstrumentIDType	InstrumentID;
	///交易所代码
	ExchangeIDType	ExchangeID;
	///交易日
	DateType	TradingDay;
	///询价编号
	OrderIDType	QuoteID;
	///询价时间
	TimeType	QuoteTime;
};

///合约
struct InstrumentField
{
	///唯一符号
	SymbolType			Symbol;
	///合约代码
	InstrumentIDType	InstrumentID;
	///交易所代码
	ExchangeIDType	ExchangeID;
	///合约名称
	InstrumentNameType InstrumentName;

	///合约名称
	InstrumentType		Type;
	///合约数量乘数
	VolumeMultipleType	VolumeMultiple;
	///最小变动价位
	PriceType	PriceTick;
	///到期日
	DateType	ExpireDate;
	///基础商品代码
	InstrumentIDType	UnderlyingInstrID;
	///执行价
	PriceType	StrikePrice;
	///期权类型
	PutCall	OptionsType;
};

///账号
struct AccountField
{
	///上次结算准备金
	MoneyType	PreBalance;
	///当前保证金总额
	MoneyType	CurrMargin;
	///手续费
	MoneyType	Commission;
	///平仓盈亏
	MoneyType	CloseProfit;
	///持仓盈亏
	MoneyType	PositionProfit;
	///期货结算准备金
	MoneyType	Balance;
	///可用资金
	MoneyType	Available;
};

///账号
struct SettlementInfoField
{
	///交易日
	DateType	TradingDay;
	///消息正文
	ContentType	Content;
};
#endif
