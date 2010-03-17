/* -*- C++ -*- */
 
/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
**
** This file is part of the QuickFIX FIX Engine
**
** This file may be distributed under the terms of the quickfixengine.org
** license as defined by quickfixengine.org and appearing in the file
** LICENSE included in the packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.quickfixengine.org/LICENSE for licensing information.
**
** Contact ask@quickfixengine.org if any conditions of this licensing are
** not clear to you.
**
****************************************************************************/

#ifndef FIX_FIELDNUMBERS_H
#define FIX_FIELDNUMBERS_H

#include <iostream>
#include "DeprecatedFieldNumbers.h"

namespace FIX
{
  namespace FIELD
  {
    
     const int Account = 1;

     const int AdvId = 2;

     const int AdvRefID = 3;

     const int AdvSide = 4;

     const int AdvTransType = 5;

     const int AvgPx = 6;

     const int ClOrdID = 11;

     const int Commission = 12;

     const int CommType = 13;

     const int CumQty = 14;

     const int Currency = 15;

     const int ExecID = 17;

     const int ExecInst = 18;

     const int ExecRefID = 19;

     const int ExecTransType = 20;

     const int HandlInst = 21;

     const int SecurityIDSource = 22;

     const int IOIID = 23;

     const int IOIOthSvc = 24;

     const int IOIQltyInd = 25;

     const int IOIRefID = 26;

     const int IOIQty = 27;

     const int IOITransType = 28;

     const int LastCapacity = 29;

     const int LastMkt = 30;

     const int LastPx = 31;

     const int LastQty = 32;

     const int NoLinesOfText = 33;

     const int OrderID = 37;

     const int OrderQty = 38;

     const int OrdStatus = 39;

     const int OrdType = 40;

     const int OrigClOrdID = 41;

     const int OrigTime = 42;

     const int Price = 44;

     const int RelatdSym = 46;

     const int Rule80A = 47;

     const int SecurityID = 48;

     const int SendingDate = 51;

     const int Quantity = 53;

     const int Side = 54;

     const int Symbol = 55;

     const int TimeInForce = 59;

     const int TransactTime = 60;

     const int Urgency = 61;

     const int ValidUntilTime = 62;

     const int SettlType = 63;

     const int SettlDate = 64;

     const int SymbolSfx = 65;

     const int ListID = 66;

     const int ListSeqNo = 67;

     const int TotNoOrders = 68;
     const int ListNoOrds = 68;

     const int ListExecInst = 69;

     const int AllocID = 70;

     const int AllocTransType = 71;

     const int RefAllocID = 72;

     const int NoOrders = 73;

     const int AvgPxPrecision = 74;

     const int TradeDate = 75;

     const int ExecBroker = 76;

     const int PositionEffect = 77;

     const int NoAllocs = 78;

     const int AllocAccount = 79;

     const int AllocQty = 80;

     const int ProcessCode = 81;

     const int NoRpts = 82;

     const int RptSeq = 83;

     const int CxlQty = 84;

     const int NoDlvyInst = 85;

     const int DlvyInst = 86;

     const int AllocStatus = 87;

     const int AllocRejCode = 88;

     const int BrokerOfCredit = 92;

     const int EmailType = 94;

     const int StopPx = 99;

     const int ExDestination = 100;

     const int CxlRejReason = 102;

     const int OrdRejReason = 103;

     const int IOIQualifier = 104;

     const int WaveNo = 105;

     const int Issuer = 106;

     const int SecurityDesc = 107;

     const int ClientID = 109;

     const int MinQty = 110;

     const int MaxFloor = 111;

     const int ReportToExch = 113;

     const int LocateReqd = 114;

     const int QuoteID = 117;

     const int NetMoney = 118;

     const int SettlCurrAmt = 119;

     const int SettlCurrency = 120;

     const int ForexReq = 121;

     const int NoExecs = 124;

     const int CxlType = 125;

     const int ExpireTime = 126;

     const int DKReason = 127;

     const int IOINaturalFlag = 130;

     const int QuoteReqID = 131;

     const int BidPx = 132;

     const int OfferPx = 133;

     const int BidSize = 134;

     const int OfferSize = 135;

     const int NoMiscFees = 136;

     const int MiscFeeAmt = 137;

     const int MiscFeeCurr = 138;

     const int MiscFeeType = 139;

     const int PrevClosePx = 140;

     const int NoRelatedSym = 146;

     const int Subject = 147;

     const int Headline = 148;

     const int URLLink = 149;

     const int ExecType = 150;

     const int LeavesQty = 151;

     const int CashOrderQty = 152;

     const int AllocAvgPx = 153;

     const int AllocNetMoney = 154;

     const int SettlCurrFxRate = 155;

     const int SettlCurrFxRateCalc = 156;

     const int NumDaysInterest = 157;

     const int AccruedInterestRate = 158;

     const int AccruedInterestAmt = 159;

     const int SettlInstMode = 160;

     const int AllocText = 161;

     const int SettlInstID = 162;

     const int SettlInstTransType = 163;

     const int EmailThreadID = 164;

     const int SettlInstSource = 165;

     const int SettlLocation = 166;

     const int SecurityType = 167;

     const int EffectiveTime = 168;

     const int StandInstDbType = 169;

     const int StandInstDbName = 170;

     const int StandInstDbID = 171;

     const int SettlDeliveryType = 172;

     const int SettlDepositoryCode = 173;

     const int SettlBrkrCode = 174;

     const int SettlInstCode = 175;

     const int SecuritySettlAgentName = 176;

     const int SecuritySettlAgentCode = 177;

     const int SecuritySettlAgentAcctNum = 178;

     const int SecuritySettlAgentAcctName = 179;

     const int SecuritySettlAgentContactName = 180;

     const int SecuritySettlAgentContactPhone = 181;

     const int CashSettlAgentName = 182;

     const int CashSettlAgentCode = 183;

     const int CashSettlAgentAcctNum = 184;

     const int CashSettlAgentAcctName = 185;

     const int CashSettlAgentContactName = 186;

     const int CashSettlAgentContactPhone = 187;

     const int BidSpotRate = 188;

     const int BidForwardPoints = 189;

     const int OfferSpotRate = 190;

     const int OfferForwardPoints = 191;

     const int OrderQty2 = 192;

     const int SettlDate2 = 193;

     const int LastSpotRate = 194;

     const int LastForwardPoints = 195;

     const int AllocLinkID = 196;

     const int AllocLinkType = 197;

     const int SecondaryOrderID = 198;

     const int NoIOIQualifiers = 199;

     const int MaturityMonthYear = 200;

     const int PutOrCall = 201;

     const int StrikePrice = 202;

     const int CoveredOrUncovered = 203;

     const int CustomerOrFirm = 204;

     const int MaturityDay = 205;

     const int OptAttribute = 206;

     const int SecurityExchange = 207;

     const int NotifyBrokerOfCredit = 208;

     const int AllocHandlInst = 209;

     const int MaxShow = 210;

     const int PegOffsetValue = 211;

     const int SettlInstRefID = 214;

     const int NoRoutingIDs = 215;

     const int RoutingType = 216;

     const int RoutingID = 217;

     const int Spread = 218;

     const int Benchmark = 219;

     const int BenchmarkCurveCurrency = 220;

     const int BenchmarkCurveName = 221;

     const int BenchmarkCurvePoint = 222;

     const int CouponRate = 223;

     const int CouponPaymentDate = 224;

     const int IssueDate = 225;

     const int RepurchaseTerm = 226;

     const int RepurchaseRate = 227;

     const int Factor = 228;

     const int TradeOriginationDate = 229;

     const int ExDate = 230;

     const int ContractMultiplier = 231;

     const int NoStipulations = 232;

     const int StipulationType = 233;

     const int StipulationValue = 234;

     const int YieldType = 235;

     const int Yield = 236;

     const int TotalTakedown = 237;

     const int Concession = 238;

     const int RepoCollateralSecurityType = 239;

     const int RedemptionDate = 240;

     const int UnderlyingCouponPaymentDate = 241;

     const int UnderlyingIssueDate = 242;

     const int UnderlyingRepoCollateralSecurityType = 243;

     const int UnderlyingRepurchaseTerm = 244;

     const int UnderlyingRepurchaseRate = 245;

     const int UnderlyingFactor = 246;

     const int UnderlyingRedemptionDate = 247;

     const int LegCouponPaymentDate = 248;

     const int LegIssueDate = 249;

     const int LegRepoCollateralSecurityType = 250;

     const int LegRepurchaseTerm = 251;

     const int LegRepurchaseRate = 252;

     const int LegFactor = 253;

     const int LegRedemptionDate = 254;

     const int CreditRating = 255;

     const int UnderlyingCreditRating = 256;

     const int LegCreditRating = 257;

     const int TradedFlatSwitch = 258;

     const int BasisFeatureDate = 259;

     const int BasisFeaturePrice = 260;

     const int MDReqID = 262;

     const int SubscriptionRequestType = 263;

     const int MarketDepth = 264;

     const int MDUpdateType = 265;

     const int AggregatedBook = 266;

     const int NoMDEntryTypes = 267;

     const int NoMDEntries = 268;

     const int MDEntryType = 269;

     const int MDEntryPx = 270;

     const int MDEntrySize = 271;

     const int MDEntryDate = 272;

     const int MDEntryTime = 273;

     const int TickDirection = 274;

     const int MDMkt = 275;

     const int QuoteCondition = 276;

     const int TradeCondition = 277;

     const int MDEntryID = 278;

     const int MDUpdateAction = 279;

     const int MDEntryRefID = 280;

     const int MDReqRejReason = 281;

     const int MDEntryOriginator = 282;

     const int LocationID = 283;

     const int DeskID = 284;

     const int DeleteReason = 285;

     const int OpenCloseSettlFlag = 286;

     const int SellerDays = 287;

     const int MDEntryBuyer = 288;

     const int MDEntrySeller = 289;

     const int MDEntryPositionNo = 290;

     const int FinancialStatus = 291;

     const int CorporateAction = 292;

     const int DefBidSize = 293;

     const int DefOfferSize = 294;

     const int NoQuoteEntries = 295;

     const int NoQuoteSets = 296;

     const int QuoteStatus = 297;

     const int QuoteCancelType = 298;

     const int QuoteEntryID = 299;

     const int QuoteRejectReason = 300;

     const int QuoteResponseLevel = 301;

     const int QuoteSetID = 302;

     const int QuoteRequestType = 303;

     const int TotNoQuoteEntries = 304;

     const int UnderlyingSecurityIDSource = 305;

     const int UnderlyingIssuer = 306;

     const int UnderlyingSecurityDesc = 307;

     const int UnderlyingSecurityExchange = 308;

     const int UnderlyingSecurityID = 309;

     const int UnderlyingSecurityType = 310;

     const int UnderlyingSymbol = 311;

     const int UnderlyingSymbolSfx = 312;

     const int UnderlyingMaturityMonthYear = 313;

     const int UnderlyingMaturityDay = 314;

     const int UnderlyingPutOrCall = 315;

     const int UnderlyingStrikePrice = 316;

     const int UnderlyingOptAttribute = 317;

     const int UnderlyingCurrency = 318;

     const int RatioQty = 319;

     const int SecurityReqID = 320;

     const int SecurityRequestType = 321;

     const int SecurityResponseID = 322;

     const int SecurityResponseType = 323;

     const int SecurityStatusReqID = 324;

     const int UnsolicitedIndicator = 325;

     const int SecurityTradingStatus = 326;

     const int HaltReason = 327;

     const int InViewOfCommon = 328;

     const int DueToRelated = 329;

     const int BuyVolume = 330;

     const int SellVolume = 331;

     const int HighPx = 332;

     const int LowPx = 333;

     const int Adjustment = 334;

     const int TradSesReqID = 335;

     const int TradingSessionID = 336;

     const int ContraTrader = 337;

     const int TradSesMethod = 338;

     const int TradSesMode = 339;

     const int TradSesStatus = 340;

     const int TradSesStartTime = 341;

     const int TradSesOpenTime = 342;

     const int TradSesPreCloseTime = 343;

     const int TradSesCloseTime = 344;

     const int TradSesEndTime = 345;

     const int NumberOfOrders = 346;

     const int EncodedIssuerLen = 348;

     const int EncodedIssuer = 349;

     const int EncodedSecurityDescLen = 350;

     const int EncodedSecurityDesc = 351;

     const int EncodedListExecInstLen = 352;

     const int EncodedListExecInst = 353;

     const int EncodedSubjectLen = 356;

     const int EncodedSubject = 357;

     const int EncodedHeadlineLen = 358;

     const int EncodedHeadline = 359;

     const int EncodedAllocTextLen = 360;

     const int EncodedAllocText = 361;

     const int EncodedUnderlyingIssuerLen = 362;

     const int EncodedUnderlyingIssuer = 363;

     const int EncodedUnderlyingSecurityDescLen = 364;

     const int EncodedUnderlyingSecurityDesc = 365;

     const int AllocPrice = 366;

     const int QuoteSetValidUntilTime = 367;

     const int QuoteEntryRejectReason = 368;

     const int OnBehalfOfSendingTime = 370;

     const int BidRequestTransType = 374;

     const int ContraBroker = 375;

     const int ComplianceID = 376;

     const int SolicitedFlag = 377;

     const int ExecRestatementReason = 378;

     const int BusinessRejectRefID = 379;

     const int BusinessRejectReason = 380;

     const int GrossTradeAmt = 381;

     const int NoContraBrokers = 382;

     const int NoTradingSessions = 386;

     const int TotalVolumeTraded = 387;

     const int DiscretionInst = 388;

     const int DiscretionOffsetValue = 389;

     const int BidID = 390;

     const int ClientBidID = 391;

     const int ListName = 392;

     const int TotNoRelatedSym = 393;

     const int BidType = 394;

     const int NumTickets = 395;

     const int SideValue1 = 396;

     const int SideValue2 = 397;

     const int NoBidDescriptors = 398;

     const int BidDescriptorType = 399;

     const int BidDescriptor = 400;

     const int SideValueInd = 401;

     const int LiquidityPctLow = 402;

     const int LiquidityPctHigh = 403;

     const int LiquidityValue = 404;

     const int EFPTrackingError = 405;

     const int FairValue = 406;

     const int OutsideIndexPct = 407;

     const int ValueOfFutures = 408;

     const int LiquidityIndType = 409;

     const int WtAverageLiquidity = 410;

     const int ExchangeForPhysical = 411;

     const int OutMainCntryUIndex = 412;

     const int CrossPercent = 413;

     const int ProgRptReqs = 414;

     const int ProgPeriodInterval = 415;

     const int IncTaxInd = 416;

     const int NumBidders = 417;

     const int BidTradeType = 418;

     const int BasisPxType = 419;

     const int NoBidComponents = 420;

     const int Country = 421;

     const int TotNoStrikes = 422;

     const int PriceType = 423;

     const int DayOrderQty = 424;

     const int DayCumQty = 425;

     const int DayAvgPx = 426;

     const int GTBookingInst = 427;

     const int NoStrikes = 428;

     const int ListStatusType = 429;

     const int NetGrossInd = 430;

     const int ListOrderStatus = 431;

     const int ExpireDate = 432;

     const int ListExecInstType = 433;

     const int CxlRejResponseTo = 434;

     const int UnderlyingCouponRate = 435;

     const int UnderlyingContractMultiplier = 436;

     const int ContraTradeQty = 437;

     const int ContraTradeTime = 438;

     const int ClearingFirm = 439;

     const int ClearingAccount = 440;

     const int LiquidityNumSecurities = 441;

     const int MultiLegReportingType = 442;

     const int StrikeTime = 443;

     const int ListStatusText = 444;

     const int EncodedListStatusTextLen = 445;

     const int EncodedListStatusText = 446;

     const int PartyIDSource = 447;

     const int PartyID = 448;

     const int TotalVolumeTradedDate = 449;

     const int TotalVolumeTradedTime = 450;

     const int NetChgPrevDay = 451;

     const int PartyRole = 452;

     const int NoPartyIDs = 453;

     const int NoSecurityAltID = 454;

     const int SecurityAltID = 455;

     const int SecurityAltIDSource = 456;

     const int NoUnderlyingSecurityAltID = 457;

     const int UnderlyingSecurityAltID = 458;

     const int UnderlyingSecurityAltIDSource = 459;

     const int Product = 460;

     const int CFICode = 461;

     const int UnderlyingProduct = 462;

     const int UnderlyingCFICode = 463;

     const int QuantityType = 465;

     const int BookingRefID = 466;

     const int IndividualAllocID = 467;

     const int RoundingDirection = 468;

     const int RoundingModulus = 469;

     const int CountryOfIssue = 470;

     const int StateOrProvinceOfIssue = 471;

     const int LocaleOfIssue = 472;

     const int NoRegistDtls = 473;

     const int MailingDtls = 474;

     const int InvestorCountryOfResidence = 475;

     const int PaymentRef = 476;

     const int DistribPaymentMethod = 477;

     const int CashDistribCurr = 478;

     const int CommCurrency = 479;

     const int CancellationRights = 480;

     const int MoneyLaunderingStatus = 481;

     const int MailingInst = 482;

     const int TransBkdTime = 483;

     const int ExecPriceType = 484;

     const int ExecPriceAdjustment = 485;

     const int DateOfBirth = 486;

     const int TradeReportTransType = 487;

     const int CardHolderName = 488;

     const int CardNumber = 489;

     const int CardExpDate = 490;

     const int CardIssNum = 491;

     const int PaymentMethod = 492;

     const int RegistAcctType = 493;

     const int Designation = 494;

     const int TaxAdvantageType = 495;

     const int RegistRejReasonText = 496;

     const int FundRenewWaiv = 497;

     const int CashDistribAgentName = 498;

     const int CashDistribAgentCode = 499;

     const int CashDistribAgentAcctNumber = 500;

     const int CashDistribPayRef = 501;

     const int CashDistribAgentAcctName = 502;

     const int CardStartDate = 503;

     const int PaymentDate = 504;

     const int PaymentRemitterID = 505;

     const int RegistStatus = 506;

     const int RegistRejReasonCode = 507;

     const int RegistRefID = 508;

     const int RegistDtls = 509;

     const int NoDistribInsts = 510;

     const int RegistEmail = 511;

     const int DistribPercentage = 512;

     const int RegistID = 513;

     const int RegistTransType = 514;

     const int ExecValuationPoint = 515;

     const int OrderPercent = 516;

     const int OwnershipType = 517;

     const int NoContAmts = 518;

     const int ContAmtType = 519;

     const int ContAmtValue = 520;

     const int ContAmtCurr = 521;

     const int OwnerType = 522;

     const int PartySubID = 523;

     const int NestedPartyID = 524;

     const int NestedPartyIDSource = 525;

     const int SecondaryClOrdID = 526;

     const int SecondaryExecID = 527;

     const int OrderCapacity = 528;

     const int OrderRestrictions = 529;

     const int MassCancelRequestType = 530;

     const int MassCancelResponse = 531;

     const int MassCancelRejectReason = 532;

     const int TotalAffectedOrders = 533;

     const int NoAffectedOrders = 534;

     const int AffectedOrderID = 535;

     const int AffectedSecondaryOrderID = 536;

     const int QuoteType = 537;

     const int NestedPartyRole = 538;

     const int NoNestedPartyIDs = 539;

     const int TotalAccruedInterestAmt = 540;

     const int MaturityDate = 541;

     const int UnderlyingMaturityDate = 542;

     const int InstrRegistry = 543;

     const int CashMargin = 544;

     const int NestedPartySubID = 545;

     const int Scope = 546;

     const int MDImplicitDelete = 547;

     const int CrossID = 548;

     const int CrossType = 549;

     const int CrossPrioritization = 550;

     const int OrigCrossID = 551;

     const int NoSides = 552;

     const int NoLegs = 555;

     const int LegCurrency = 556;

     const int TotNoSecurityTypes = 557;

     const int NoSecurityTypes = 558;

     const int SecurityListRequestType = 559;

     const int SecurityRequestResult = 560;

     const int RoundLot = 561;

     const int MinTradeVol = 562;

     const int MultiLegRptTypeReq = 563;

     const int LegPositionEffect = 564;

     const int LegCoveredOrUncovered = 565;

     const int LegPrice = 566;

     const int TradSesStatusRejReason = 567;

     const int TradeRequestID = 568;

     const int TradeRequestType = 569;

     const int PreviouslyReported = 570;

     const int TradeReportID = 571;

     const int TradeReportRefID = 572;

     const int MatchStatus = 573;

     const int MatchType = 574;

     const int OddLot = 575;

     const int NoClearingInstructions = 576;

     const int ClearingInstruction = 577;

     const int TradeInputSource = 578;

     const int TradeInputDevice = 579;

     const int NoDates = 580;

     const int AccountType = 581;

     const int CustOrderCapacity = 582;

     const int ClOrdLinkID = 583;

     const int MassStatusReqID = 584;

     const int MassStatusReqType = 585;

     const int OrigOrdModTime = 586;

     const int LegSettlType = 587;

     const int LegSettlDate = 588;

     const int DayBookingInst = 589;

     const int BookingUnit = 590;

     const int PreallocMethod = 591;

     const int UnderlyingCountryOfIssue = 592;

     const int UnderlyingStateOrProvinceOfIssue = 593;

     const int UnderlyingLocaleOfIssue = 594;

     const int UnderlyingInstrRegistry = 595;

     const int LegCountryOfIssue = 596;

     const int LegStateOrProvinceOfIssue = 597;

     const int LegLocaleOfIssue = 598;

     const int LegInstrRegistry = 599;

     const int LegSymbol = 600;

     const int LegSymbolSfx = 601;

     const int LegSecurityID = 602;

     const int LegSecurityIDSource = 603;

     const int NoLegSecurityAltID = 604;

     const int LegSecurityAltID = 605;

     const int LegSecurityAltIDSource = 606;

     const int LegProduct = 607;

     const int LegCFICode = 608;

     const int LegSecurityType = 609;

     const int LegMaturityMonthYear = 610;

     const int LegMaturityDate = 611;

     const int LegStrikePrice = 612;

     const int LegOptAttribute = 613;

     const int LegContractMultiplier = 614;

     const int LegCouponRate = 615;

     const int LegSecurityExchange = 616;

     const int LegIssuer = 617;

     const int EncodedLegIssuerLen = 618;

     const int EncodedLegIssuer = 619;

     const int LegSecurityDesc = 620;

     const int EncodedLegSecurityDescLen = 621;

     const int EncodedLegSecurityDesc = 622;

     const int LegRatioQty = 623;

     const int LegSide = 624;

     const int TradingSessionSubID = 625;

     const int AllocType = 626;

     const int MidPx = 631;

     const int BidYield = 632;

     const int MidYield = 633;

     const int OfferYield = 634;

     const int ClearingFeeIndicator = 635;

     const int WorkingIndicator = 636;

     const int LegLastPx = 637;

     const int PriorityIndicator = 638;

     const int PriceImprovement = 639;

     const int Price2 = 640;

     const int LastForwardPoints2 = 641;

     const int BidForwardPoints2 = 642;

     const int OfferForwardPoints2 = 643;

     const int RFQReqID = 644;

     const int MktBidPx = 645;

     const int MktOfferPx = 646;

     const int MinBidSize = 647;

     const int MinOfferSize = 648;

     const int QuoteStatusReqID = 649;

     const int LegalConfirm = 650;

     const int UnderlyingLastPx = 651;

     const int UnderlyingLastQty = 652;

     const int SecDefStatus = 653;

     const int LegRefID = 654;

     const int ContraLegRefID = 655;

     const int SettlCurrBidFxRate = 656;

     const int SettlCurrOfferFxRate = 657;

     const int QuoteRequestRejectReason = 658;

     const int SideComplianceID = 659;

     const int AcctIDSource = 660;

     const int AllocAcctIDSource = 661;

     const int BenchmarkPrice = 662;

     const int BenchmarkPriceType = 663;

     const int ConfirmID = 664;

     const int ConfirmStatus = 665;

     const int ConfirmTransType = 666;

     const int ContractSettlMonth = 667;

     const int DeliveryForm = 668;

     const int LastParPx = 669;

     const int NoLegAllocs = 670;

     const int LegAllocAccount = 671;

     const int LegIndividualAllocID = 672;

     const int LegAllocQty = 673;

     const int LegAllocAcctIDSource = 674;

     const int LegSettlCurrency = 675;

     const int LegBenchmarkCurveCurrency = 676;

     const int LegBenchmarkCurveName = 677;

     const int LegBenchmarkCurvePoint = 678;

     const int LegBenchmarkPrice = 679;

     const int LegBenchmarkPriceType = 680;

     const int LegBidPx = 681;

     const int LegIOIQty = 682;

     const int NoLegStipulations = 683;

     const int LegOfferPx = 684;

     const int LegOrderQty = 685;

     const int LegPriceType = 686;

     const int LegQty = 687;

     const int LegStipulationType = 688;

     const int LegStipulationValue = 689;

     const int LegSwapType = 690;

     const int Pool = 691;

     const int QuotePriceType = 692;

     const int QuoteRespID = 693;

     const int QuoteRespType = 694;

     const int QuoteQualifier = 695;

     const int YieldRedemptionDate = 696;

     const int YieldRedemptionPrice = 697;

     const int YieldRedemptionPriceType = 698;

     const int BenchmarkSecurityID = 699;

     const int ReversalIndicator = 700;

     const int YieldCalcDate = 701;

     const int NoPositions = 702;

     const int PosType = 703;

     const int LongQty = 704;

     const int ShortQty = 705;

     const int PosQtyStatus = 706;

     const int PosAmtType = 707;

     const int PosAmt = 708;

     const int PosTransType = 709;

     const int PosReqID = 710;

     const int NoUnderlyings = 711;

     const int PosMaintAction = 712;

     const int OrigPosReqRefID = 713;

     const int PosMaintRptRefID = 714;

     const int ClearingBusinessDate = 715;

     const int SettlSessID = 716;

     const int SettlSessSubID = 717;

     const int AdjustmentType = 718;

     const int ContraryInstructionIndicator = 719;

     const int PriorSpreadIndicator = 720;

     const int PosMaintRptID = 721;

     const int PosMaintStatus = 722;

     const int PosMaintResult = 723;

     const int PosReqType = 724;

     const int ResponseTransportType = 725;

     const int ResponseDestination = 726;

     const int TotalNumPosReports = 727;

     const int PosReqResult = 728;

     const int PosReqStatus = 729;

     const int SettlPrice = 730;

     const int SettlPriceType = 731;

     const int UnderlyingSettlPrice = 732;

     const int UnderlyingSettlPriceType = 733;

     const int PriorSettlPrice = 734;

     const int NoQuoteQualifiers = 735;

     const int AllocSettlCurrency = 736;

     const int AllocSettlCurrAmt = 737;

     const int InterestAtMaturity = 738;

     const int LegDatedDate = 739;

     const int LegPool = 740;

     const int AllocInterestAtMaturity = 741;

     const int AllocAccruedInterestAmt = 742;

     const int DeliveryDate = 743;

     const int AssignmentMethod = 744;

     const int AssignmentUnit = 745;

     const int OpenInterest = 746;

     const int ExerciseMethod = 747;

     const int TotNumTradeReports = 748;

     const int TradeRequestResult = 749;

     const int TradeRequestStatus = 750;

     const int TradeReportRejectReason = 751;

     const int SideMultiLegReportingType = 752;

     const int NoPosAmt = 753;

     const int AutoAcceptIndicator = 754;

     const int AllocReportID = 755;

     const int NoNested2PartyIDs = 756;

     const int Nested2PartyID = 757;

     const int Nested2PartyIDSource = 758;

     const int Nested2PartyRole = 759;

     const int Nested2PartySubID = 760;

     const int BenchmarkSecurityIDSource = 761;

     const int SecuritySubType = 762;

     const int UnderlyingSecuritySubType = 763;

     const int LegSecuritySubType = 764;

     const int AllowableOneSidednessPct = 765;

     const int AllowableOneSidednessValue = 766;

     const int AllowableOneSidednessCurr = 767;

     const int NoTrdRegTimestamps = 768;

     const int TrdRegTimestamp = 769;

     const int TrdRegTimestampType = 770;

     const int TrdRegTimestampOrigin = 771;

     const int ConfirmRefID = 772;

     const int ConfirmType = 773;

     const int ConfirmRejReason = 774;

     const int BookingType = 775;

     const int IndividualAllocRejCode = 776;

     const int SettlInstMsgID = 777;

     const int NoSettlInst = 778;

     const int LastUpdateTime = 779;

     const int AllocSettlInstType = 780;

     const int NoSettlPartyIDs = 781;

     const int SettlPartyID = 782;

     const int SettlPartyIDSource = 783;

     const int SettlPartyRole = 784;

     const int SettlPartySubID = 785;

     const int SettlPartySubIDType = 786;

     const int DlvyInstType = 787;

     const int TerminationType = 788;

     const int OrdStatusReqID = 790;

     const int SettlInstReqID = 791;

     const int SettlInstReqRejCode = 792;

     const int SecondaryAllocID = 793;

     const int AllocReportType = 794;

     const int AllocReportRefID = 795;

     const int AllocCancReplaceReason = 796;

     const int CopyMsgIndicator = 797;

     const int AllocAccountType = 798;

     const int OrderAvgPx = 799;

     const int OrderBookingQty = 800;

     const int NoSettlPartySubIDs = 801;

     const int NoPartySubIDs = 802;

     const int PartySubIDType = 803;

     const int NoNestedPartySubIDs = 804;

     const int NestedPartySubIDType = 805;

     const int NoNested2PartySubIDs = 806;

     const int Nested2PartySubIDType = 807;

     const int AllocIntermedReqType = 808;

     const int UnderlyingPx = 810;

     const int PriceDelta = 811;

     const int ApplQueueMax = 812;

     const int ApplQueueDepth = 813;

     const int ApplQueueResolution = 814;

     const int ApplQueueAction = 815;

     const int NoAltMDSource = 816;

     const int AltMDSourceID = 817;

     const int SecondaryTradeReportID = 818;

     const int AvgPxIndicator = 819;

     const int TradeLinkID = 820;

     const int OrderInputDevice = 821;

     const int UnderlyingTradingSessionID = 822;

     const int UnderlyingTradingSessionSubID = 823;

     const int TradeLegRefID = 824;

     const int ExchangeRule = 825;

     const int TradeAllocIndicator = 826;

     const int ExpirationCycle = 827;

     const int TrdType = 828;

     const int TrdSubType = 829;

     const int TransferReason = 830;

     const int AsgnReqID = 831;

     const int TotNumAssignmentReports = 832;

     const int AsgnRptID = 833;

     const int ThresholdAmount = 834;

     const int PegMoveType = 835;

     const int PegOffsetType = 836;

     const int PegLimitType = 837;

     const int PegRoundDirection = 838;

     const int PeggedPrice = 839;

     const int PegScope = 840;

     const int DiscretionMoveType = 841;

     const int DiscretionOffsetType = 842;

     const int DiscretionLimitType = 843;

     const int DiscretionRoundDirection = 844;

     const int DiscretionPrice = 845;

     const int DiscretionScope = 846;

     const int TargetStrategy = 847;

     const int TargetStrategyParameters = 848;

     const int ParticipationRate = 849;

     const int TargetStrategyPerformance = 850;

     const int LastLiquidityInd = 851;

     const int PublishTrdIndicator = 852;

     const int ShortSaleReason = 853;

     const int QtyType = 854;

     const int SecondaryTrdType = 855;

     const int TradeReportType = 856;

     const int AllocNoOrdersType = 857;

     const int SharedCommission = 858;

     const int ConfirmReqID = 859;

     const int AvgParPx = 860;

     const int ReportedPx = 861;

     const int NoCapacities = 862;

     const int OrderCapacityQty = 863;

     const int NoEvents = 864;

     const int EventType = 865;

     const int EventDate = 866;

     const int EventPx = 867;

     const int EventText = 868;

     const int PctAtRisk = 869;

     const int NoInstrAttrib = 870;

     const int InstrAttribType = 871;

     const int InstrAttribValue = 872;

     const int DatedDate = 873;

     const int InterestAccrualDate = 874;

     const int CPProgram = 875;

     const int CPRegType = 876;

     const int UnderlyingCPProgram = 877;

     const int UnderlyingCPRegType = 878;

     const int UnderlyingQty = 879;

     const int TrdMatchID = 880;

     const int SecondaryTradeReportRefID = 881;

     const int UnderlyingDirtyPrice = 882;

     const int UnderlyingEndPrice = 883;

     const int UnderlyingStartValue = 884;

     const int UnderlyingCurrentValue = 885;

     const int UnderlyingEndValue = 886;

     const int NoUnderlyingStips = 887;

     const int UnderlyingStipType = 888;

     const int UnderlyingStipValue = 889;

     const int MaturityNetMoney = 890;

     const int MiscFeeBasis = 891;

     const int TotNoAllocs = 892;

     const int LastFragment = 893;

     const int CollReqID = 894;

     const int CollAsgnReason = 895;

     const int CollInquiryQualifier = 896;

     const int NoTrades = 897;

     const int MarginRatio = 898;

     const int MarginExcess = 899;

     const int TotalNetValue = 900;

     const int CashOutstanding = 901;

     const int CollAsgnID = 902;

     const int CollAsgnTransType = 903;

     const int CollRespID = 904;

     const int CollAsgnRespType = 905;

     const int CollAsgnRejectReason = 906;

     const int CollAsgnRefID = 907;

     const int CollRptID = 908;

     const int CollInquiryID = 909;

     const int CollStatus = 910;

     const int TotNumReports = 911;

     const int LastRptRequested = 912;

     const int AgreementDesc = 913;

     const int AgreementID = 914;

     const int AgreementDate = 915;

     const int StartDate = 916;

     const int EndDate = 917;

     const int AgreementCurrency = 918;

     const int DeliveryType = 919;

     const int EndAccruedInterestAmt = 920;

     const int StartCash = 921;

     const int EndCash = 922;

     const int UserRequestID = 923;

     const int UserRequestType = 924;

     const int NewPassword = 925;

     const int UserStatus = 926;

     const int UserStatusText = 927;

     const int StatusValue = 928;

     const int StatusText = 929;

     const int RefCompID = 930;

     const int RefSubID = 931;

     const int NetworkResponseID = 932;

     const int NetworkRequestID = 933;

     const int LastNetworkResponseID = 934;

     const int NetworkRequestType = 935;

     const int NoCompIDs = 936;

     const int NetworkStatusResponseType = 937;

     const int NoCollInquiryQualifier = 938;

     const int TrdRptStatus = 939;

     const int AffirmStatus = 940;

     const int UnderlyingStrikeCurrency = 941;

     const int LegStrikeCurrency = 942;

     const int TimeBracket = 943;

     const int CollAction = 944;

     const int CollInquiryStatus = 945;

     const int CollInquiryResult = 946;

     const int StrikeCurrency = 947;

     const int NoNested3PartyIDs = 948;

     const int Nested3PartyID = 949;

     const int Nested3PartyIDSource = 950;

     const int Nested3PartyRole = 951;

     const int NoNested3PartySubIDs = 952;

     const int Nested3PartySubID = 953;

     const int Nested3PartySubIDType = 954;

     const int LegContractSettlMonth = 955;

     const int LegInterestAccrualDate = 956;

     const int NoStrategyParameters = 957;

     const int StrategyParameterName = 958;

     const int StrategyParameterType = 959;

     const int StrategyParameterValue = 960;

     const int HostCrossID = 961;

     const int SideTimeInForce = 962;

     const int MDReportID = 963;

     const int SecurityReportID = 964;

     const int SecurityStatus = 965;

     const int SettleOnOpenFlag = 966;

     const int StrikeMultiplier = 967;

     const int StrikeValue = 968;

     const int MinPriceIncrement = 969;

     const int PositionLimit = 970;

     const int NTPositionLimit = 971;

     const int UnderlyingAllocationPercent = 972;

     const int UnderlyingCashAmount = 973;

     const int UnderlyingCashType = 974;

     const int UnderlyingSettlementType = 975;

     const int QuantityDate = 976;

     const int ContIntRptID = 977;

     const int LateIndicator = 978;

     const int InputSource = 979;

     const int SecurityUpdateAction = 980;

     const int NoExpiration = 981;

     const int ExpType = 982;

     const int ExpQty = 983;

     const int NoUnderlyingAmounts = 984;

     const int UnderlyingPayAmount = 985;

     const int UnderlyingCollectAmount = 986;

     const int UnderlyingSettlementDate = 987;

     const int UnderlyingSettlementStatus = 988;

     const int SecondaryIndividualAllocID = 989;

     const int LegReportID = 990;

     const int RndPx = 991;

     const int IndividualAllocType = 992;

     const int AllocCustomerCapacity = 993;

     const int TierCode = 994;

     const int UnitofMeasure = 996;

     const int TimeUnit = 997;

     const int UnderlyingUnitofMeasure = 998;

     const int LegUnitofMeasure = 999;

     const int UnderlyingTimeUnit = 1000;

     const int LegTimeUnit = 1001;

     const int AllocMethod = 1002;

     const int TradeID = 1003;

     const int SideTradeReportID = 1005;

     const int SideFillStationCd = 1006;

     const int SideReasonCd = 1007;

     const int SideTrdSubTyp = 1008;

     const int SideQty = 1009;

     const int MessageEventSource = 1011;

     const int SideTrdRegTimestamp = 1012;

     const int SideTrdRegTimestampType = 1013;

     const int SideTrdRegTimestampSrc = 1014;

     const int AsOfIndicator = 1015;

     const int NoSideTrdRegTS = 1016;

     const int LegOptionRatio = 1017;

     const int NoInstrumentParties = 1018;

     const int InstrumentPartyID = 1019;

     const int TradeVolume = 1020;

     const int MDBookType = 1021;

     const int MDFeedType = 1022;

     const int MDPriceLevel = 1023;

     const int MDOriginType = 1024;

     const int FirstPx = 1025;

     const int MDEntrySpotRate = 1026;

     const int MDEntryForwardPoints = 1027;

     const int ManualOrderIndicator = 1028;

     const int CustDirectedOrder = 1029;

     const int ReceivedDeptID = 1030;

     const int CustOrderHandlingInst = 1031;

     const int OrderHandlingInstSource = 1032;

     const int DeskType = 1033;

     const int DeskTypeSource = 1034;

     const int DeskOrderHandlingInst = 1035;

     const int ExecAckStatus = 1036;

     const int UnderlyingDeliveryAmount = 1037;

     const int UnderlyingCapValue = 1038;

     const int UnderlyingSettlMethod = 1039;

     const int SecondaryTradeID = 1040;

     const int FirmTradeID = 1041;

     const int SecondaryFirmTradeID = 1042;

     const int CollApplType = 1043;

     const int UnderlyingAdjustedQuantity = 1044;

     const int UnderlyingFXRate = 1045;

     const int UnderlyingFXRateCalc = 1046;

     const int AllocPositionEffect = 1047;

     const int DealingCapacity = 1048;

     const int InstrmtAssignmentMethod = 1049;

     const int InstrumentPartyIDSource = 1050;

     const int InstrumentPartyRole = 1051;

     const int NoInstrumentPartySubIDs = 1052;

     const int InstrumentPartySubID = 1053;

     const int InstrumentPartySubIDType = 1054;

     const int PositionCurrency = 1055;

     const int CalculatedCcyLastQty = 1056;

     const int AggressorIndicator = 1057;

     const int NoUndlyInstrumentParties = 1058;

     const int UndlyInstrumentPartyID = 1059;

     const int UndlyInstrumentPartyIDSource = 1060;

     const int UndlyInstrumentPartyRole = 1061;

     const int NoUndlyInstrumentPartySubIDs = 1062;

     const int UndlyInstrumentPartySubID = 1063;

     const int UndlyInstrumentPartySubIDType = 1064;

     const int BidSwapPoints = 1065;

     const int OfferSwapPoints = 1066;

     const int LegBidForwardPoints = 1067;

     const int LegOfferForwardPoints = 1068;

     const int SwapPoints = 1069;

     const int MDQuoteType = 1070;

     const int LastSwapPoints = 1071;

     const int SideGrossTradeAmt = 1072;

     const int LegLastForwardPoints = 1073;

     const int LegCalculatedCcyLastQty = 1074;

     const int LegGrossTradeAmt = 1075;

     const int MaturityTime = 1079;

     const int RefOrderID = 1080;

     const int RefOrderIDSource = 1081;

     const int SecondaryDisplayQty = 1082;

     const int DisplayWhen = 1083;

     const int DisplayMethod = 1084;

     const int DisplayLowQty = 1085;

     const int DisplayHighQty = 1086;

     const int DisplayMinIncr = 1087;

     const int RefreshQty = 1088;

     const int MatchIncrement = 1089;

     const int MaxPriceLevels = 1090;

     const int PreTradeAnonymity = 1091;

     const int PriceProtectionScope = 1092;

     const int LotType = 1093;

     const int PegPriceType = 1094;

     const int PeggedRefPrice = 1095;

     const int PegSecurityIDSource = 1096;

     const int PegSecurityID = 1097;

     const int PegSymbol = 1098;

     const int PegSecurityDesc = 1099;

     const int TriggerType = 1100;

     const int TriggerAction = 1101;

     const int TriggerPrice = 1102;

     const int TriggerSymbol = 1103;

     const int TriggerSecurityID = 1104;

     const int TriggerSecurityIDSource = 1105;

     const int TriggerSecurityDesc = 1106;

     const int TriggerPriceType = 1107;

     const int TriggerPriceTypeScope = 1108;

     const int TriggerPriceDirection = 1109;

     const int TriggerNewPrice = 1110;

     const int TriggerOrderType = 1111;

     const int TriggerNewQty = 1112;

     const int TriggerTradingSessionID = 1113;

     const int TriggerTradingSessionSubID = 1114;

     const int OrderCategory = 1115;

     const int NoRootPartyIDs = 1116;

     const int RootPartyID = 1117;

     const int RootPartyIDSource = 1118;

     const int RootPartyRole = 1119;

     const int NoRootPartySubIDs = 1120;

     const int RootPartySubID = 1121;

     const int RootPartySubIDType = 1122;

     const int TradeHandlingInstr = 1123;

     const int OrigTradeHandlingInstr = 1124;

     const int OrigTradeDate = 1125;

     const int OrigTradeID = 1126;

     const int OrigSecondaryTradeID = 1127;

     const int TZTransactTime = 1132;

     const int ExDestinationIDSource = 1133;

     const int ReportedPxDiff = 1134;

     const int RptSys = 1135;

     const int AllocClearingFeeIndicator = 1136;

     const int DisplayQty = 1138;

     const int ExchangeSpecialInstructions = 1139;

  }
}

#endif //FIX_FIELDNUMBERS_H

