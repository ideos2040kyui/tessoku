; 左右 Control キーの空打ちで IME の OFF/ON を切り替える
;
; 左 Control キーの空打ちで IME を「英数」に切り替え
; 右 Control キーの空打ちで IME を「かな」に切り替え
; Control キーを押している間に他のキーを打つと通常の Control キーとして動作
;
; Author:     karakaram   http://www.karakaram.com/alt-ime-on-off

#Include C:\D_drive\IME.ahk

; Razer Synapseなど、キーカスタマイズ系のツールを併用しているときのエラー対策
#MaxHotkeysPerInterval 350

; 主要なキーを HotKey に設定し、何もせずパススルーする
*~a::
*~b::
*~c::
*~d::
*~e::
*~f::
*~g::
*~h::
*~i::
*~j::
*~k::
*~l::
*~m::
*~n::
*~o::
*~p::
*~q::
*~r::
*~s::
*~t::
*~u::
*~v::
*~w::
*~x::
*~y::
*~z::
*~1::
*~2::
*~3::
*~4::
*~5::
*~6::
*~7::
*~8::
*~9::
*~0::
*~F1::
*~F2::
*~F3::
*~F4::
*~F5::
*~F6::
*~F7::
*~F8::
*~F9::
*~F10::
*~F11::
*~F12::
*~`::
*~~::
*~!::
*~@::
*~#::
*~$::
*~%::
*~^::
*~&::
*~*::
*~(::
*~)::
*~-::
*~_::
*~=::
*~+::
*~[::
*~{::
*~]::
*~}::
*~\::
*~|::
*~;::
*~'::
*~"::
*~,::
*~<::
*~.::
*~>::
*~/::
*~?::
*~Esc::
*~Tab::
*~Space::
*~Left::
*~Right::
*~Up::
*~Down::
*~Enter::
*~PrintScreen::
*~Delete::
*~Home::
*~End::
*~PgUp::
*~PgDn::
    Return

; 上部メニューがアクティブになるのを抑制
*~LControl::Send {Blind}{vk07}
*~RControl::Send {Blind}{vk07}

; 左 Control 空打ちで IME を OFF
LControl up::
    if (A_PriorHotkey == "*~LControl")
    {
        IME_SET(0)
    }
    Return

; 右 Control 空打ちで IME を ON
RControl up::
    if (A_PriorHotkey == "*~RControl")
    {
        IME_SET(1)
    }
    Return

F13 & e:: Send,{Blind}{Up}
F13 & s:: Send,{Blind}{Left}
F13 & d:: Send,{Blind}{Down}
F13 & f:: Send,{Blind}{Right}
F13 & x:: Send,{Blind}{Home}
F13 & v:: Send,{Blind}{End}
F13 & g:: Run, explorer.exe
F13 & j:: Send,{Blind}{Backspace}
F13 & k:: Send,{Blind}{[}
F13 & l:: Send,{Blind}{]}
F13 & sc027:: Send,{Blind}{-}
F13 & sc028:: Send,{Blind}{=}
F13 & y:: Send,{Blind}{F6}
F13 & u:: Send,{Blind}{F7}
F13 & i:: Send,{Blind}{F8}
F13 & o:: Send,{Blind}{F9}
F13 & m:: Send,{Blind}{Delete}
F13 & ,:: Send,{Blind}{(}
F13 & .:: Send,{Blind}{)}
F13 & sc035:: Send,{Blind}{sc02B}
