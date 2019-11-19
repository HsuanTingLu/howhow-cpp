/* Howhow CLI C++ porting
 * Copyright (C) <2019>  <Hsuan-Ting Lu>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "howhow.hpp"

#include <array>
#include <chrono>
#include <random>

namespace howhow {
namespace {
const std::array<std::string, 58> quotes = {
    "J 格是 ... 大人的味道！！！",
    "你擔心你的髮線越來越高嘛？",
    "不會下雨啦～下雨我剃光頭",
    "Gogoro？............水啦",
    "啃！要做就要做好做滿啊！",
    "克寧奶粉 ... 踢足球 ... 席丹 ... 席丹是法國人 ... 法國人 ... 法國倫 ... "
    "黃國倫 ... 黃國倫老婆是寇乃馨 ... 康乃馨！",
    "我的阿嬤逆啊～～",
    "我埋的。是對未來。塵封的期許。",
    "種子種子，種子種子種子，種子，種子種子種子種子種子",
    "直播伯伯剝橘子",
    "啊啊啊啊～ 我好興奮 R～～",
    "很臭，走開",
    "抱歉，你是誰啊？",
    "其實我寄貨的時候很粗心，我不小心把我住信義區 80 坪的地契影本，還有我開 "
    "Maserati 的時候，我朋友幫我拍的拍立得照片留在口袋",
    "他才不是什麼恐龍裝啊！他是嗶之助啊！",
    "想想快絕種的北極熊吧，想想正在洗澡的雞排妹吧 ... 嘶 ...",
    "大家一起賺五億，大家一起把朋友拉進購物社團吧～！",
    "嗶你妹個悠遊卡啦",
    "粗獷，到底是念粗 ㄍㄨㄤˇ 還是粗 ㄎㄨㄤˋ ？",
    "不拖泥帶水！直接進入業配主題～！",
    "嘿嘿嘿嘿，腹黑屋老闆你，你也挺壞的嘛～",
    "不會動的手錶，一天至少會對 ... 兩次  ...！",
    "你幹話也蠻多的嗎～",
    "你才禿頭啦！！你全家都禿頭啦！！",
    "你沒有妹妹",
    "我們一起看夜景，出遊，撿肥皂，這些，都是假的嗎？？",
    "不是長的像金城武的病啦，那個已經是絕症了",
    "J 三 ... 小",
    "這 ... 阿伯也包太大包了吧！不是阿伯下面一大包，是阿伯的紅包啊！！",
    "誒，你看我下面這一大包 ...... 衛生紙啦～",
    "haohao 啊～緊來呷水果喔～",
    "現在時間，洞五三洞，安全士官請部隊起床～",
    "討厭，你在想色色的事情對吧～",
    "喔Ｘ！ 爸的！",
    "四郎，幫我開火！...差點忘記我沒朋友",
    "況且那天 ... 我只是經過內衣店而已 ...",
    "於是我就很高興的走過去用皮卡丘語跟他說，皮卡皮卡，然後他就跟我說，哩洗勒公"
    "殺洨啦耖零呆。",
    "最新鮮早上才到港的鯛魚，精湛的刀工，最重要的是用冰刀去處理，來了！",
    "齁～我要告老師～",
    "喔～～～",
    "媽媽的零用錢 25 元！！喔喔～剛好可以買一罐茶之初喔～",
    "你是在供，三小。",
    "可 ... 可惡",
    "呱吉爆雷王，呱吉吃大便～",
    "嗯？你說原本要找金城武，但發現找我好像也有同樣的效果？齁喔？",
    "看！陳孜昊你北七喔！",
    "你還是進監獄裡好好反省吧！",
    "我終於，也可以抬頭挺胸的說，我也是工具人了",
    "我想要在我的Ｘ頭上刺青，我是說舌頭啦～",
    "喔喔喔喔喔喔喔原來是旺梨小鎮的土鳳梨酥啊！",
    "要到了學妹的臉書，可是為什麼我要上線她就下線了，可...可惡！",
    "等等，我只是沒有穿褲子啊，為什麼要逮捕我？",
    "嚕拉拉嚕拉拉～嚕拉嚕拉勒～嚕拉～嚕拉～嚕拉～嚕拉嚕拉勒～",
    "騙你的啦，我根本沒穿內褲喔！喔！差點就被你騙了呢！",
    "孔雀餅乾，掉在地上七秒之內撿起來，更好吃",
    "沒...沒關係我懂了，沒有控肉便當沒關係，我的車馬費再用 ATM "
    "轉帳給我就好了，到提款機的時候，換成英文介面再打給 ...",
    "想要一起加入 How 哥宇宙嗎？",
    "第一次求婚，好緊張"};
}  // anonymous namespace

std::string talk(const unsigned seed) {
    return quotes[std::default_random_engine(seed)() % quotes.size()];
}

std::string talk() {
    return talk(std::chrono::system_clock::now().time_since_epoch().count());
}

}  // namespace howhow
