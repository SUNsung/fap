
        
        StringRef swift::prettyPlatformString(PlatformKind platform) {
  switch (platform) {
  case PlatformKind::none:
    return '*';
#define AVAILABILITY_PLATFORM(X, PrettyName)                                   \
  case PlatformKind::X:                                                        \
    return PrettyName;
#include 'swift/AST/PlatformKinds.def'
  }
  llvm_unreachable('bad PlatformKind');
}
    
    void CacheImpl::setAndRetain(void *Key, void *Value, size_t Cost) {
  cache_set_and_retain(static_cast<cache_t*>(Impl), Key, Value, Cost);
}
    
    void DiverseStackBase::pushNewStorageSlow(std::size_t needed) {
  bool wasInline = isAllocatedInline();
    }
    
    VERB(abbreviate)
VERB(accept)
VERB(activate)
VERB(add)
VERB(adjust)
VERB(admire)
VERB(admit)
VERB(advise)
VERB(afford)
VERB(agree)
VERB(alert)
VERB(allow)
VERB(alter)
VERB(amuse)
VERB(analyse)
VERB(analyze)
VERB(animate)
VERB(announce)
VERB(annoy)
VERB(answer)
VERB(apologise)
VERB(appear)
VERB(append)
VERB(applaud)
VERB(apply)
VERB(apportion)
VERB(appreciate)
VERB(approve)
VERB(argue)
VERB(arrange)
VERB(arrest)
VERB(arrive)
VERB(ask)
VERB(assign)
VERB(attach)
VERB(attack)
VERB(attempt)
VERB(attend)
VERB(attract)
VERB(avoid)
VERB(awake)
VERB(back)
VERB(bake)
VERB(balance)
VERB(ban)
VERB(bang)
VERB(bare)
VERB(bat)
VERB(bathe)
VERB(battle)
VERB(be)
VERB(beat)
VERB(become)
VERB(beg)
VERB(begin)
VERB(behave)
VERB(belong)
VERB(bend)
VERB(bet)
VERB(bid)
VERB(bite)
VERB(bleach)
VERB(bless)
VERB(blind)
VERB(blink)
VERB(blot)
VERB(blow)
VERB(blush)
VERB(boast)
VERB(boil)
VERB(bolt)
VERB(bomb)
VERB(book)
VERB(bore)
VERB(borrow)
VERB(bounce)
VERB(bow)
VERB(box)
VERB(brake)
VERB(branch)
VERB(break)
VERB(breathe)
VERB(bring)
VERB(broadcast)
VERB(bruise)
VERB(brush)
VERB(bubble)
VERB(build)
VERB(bump)
VERB(burn)
VERB(bury)
VERB(buy)
VERB(buzz)
VERB(calculate)
VERB(call)
VERB(camp)
VERB(cancel)
VERB(capture)
VERB(care)
VERB(carry)
VERB(carve)
VERB(cast)
VERB(catch)
VERB(cause)
VERB(center)
VERB(challenge)
VERB(change)
VERB(charge)
VERB(chase)
VERB(cheat)
VERB(check)
VERB(cheer)
VERB(chew)
VERB(choke)
VERB(choose)
VERB(chop)
VERB(claim)
VERB(clap)
VERB(clean)
VERB(clear)
VERB(click)
VERB(close)
VERB(coach)
VERB(coil)
VERB(collect)
VERB(collapse)
VERB(colour)
VERB(comb)
VERB(come)
VERB(command)
VERB(commit)
VERB(communicate)
VERB(compare)
VERB(compete)
VERB(complain)
VERB(complete)
VERB(concentrate)
VERB(concern)
VERB(confess)
VERB(confuse)
VERB(connect)
VERB(consider)
VERB(consist)
VERB(contain)
VERB(contains)
VERB(continue)
VERB(convert)
VERB(copy)
VERB(correct)
VERB(cough)
VERB(cost)
VERB(count)
VERB(cover)
VERB(crack)
VERB(crash)
VERB(crawl)
VERB(cross)
VERB(crush)
VERB(cry)
VERB(cure)
VERB(curl)
VERB(curve)
VERB(customize)
VERB(cut)
VERB(cycle)
VERB(dam)
VERB(damage)
VERB(dance)
VERB(dare)
VERB(decay)
VERB(deceive)
VERB(decide)
VERB(decode)
VERB(decorate)
VERB(defer)
VERB(define)
VERB(delay)
VERB(delete)
VERB(delight)
VERB(deliver)
VERB(depend)
VERB(describe)
VERB(deselect)
VERB(desert)
VERB(deserve)
VERB(destroy)
VERB(detach)
VERB(detect)
VERB(develop)
VERB(dig)
VERB(dim)
VERB(disagree)
VERB(disappear)
VERB(disapprove)
VERB(disarm)
VERB(discover)
VERB(dislike)
VERB(dismiss)
VERB(display)
VERB(divide)
VERB(do)
VERB(double)
VERB(doubt)
VERB(drag)
VERB(drain)
VERB(draw)
VERB(dream)
VERB(dress)
VERB(drink)
VERB(drip)
VERB(drive)
VERB(drop)
VERB(drown)
VERB(drum)
VERB(dry)
VERB(duplicate)
VERB(dust)
VERB(earn)
VERB(eat)
VERB(echo)
VERB(edit)
VERB(educate)
VERB(embarrass)
VERB(employ)
VERB(empty)
VERB(enable)
VERB(encode)
VERB(encourage)
VERB(end)
VERB(enjoy)
VERB(enter)
VERB(entertain)
VERB(enumerate)
VERB(enqueue)
VERB(escape)
VERB(examine)
VERB(excite)
VERB(excuse)
VERB(execute)
VERB(exercise)
VERB(exist)
VERB(expand)
VERB(expect)
VERB(explain)
VERB(explode)
VERB(export)
VERB(extend)
VERB(face)
VERB(fade)
VERB(fail)
VERB(fancy)
VERB(fasten)
VERB(fax)
VERB(fear)
VERB(feel)
VERB(fence)
VERB(fetch)
VERB(fight)
VERB(fill)
VERB(film)
VERB(find)
VERB(finish)
VERB(fire)
VERB(fit)
VERB(fix)
VERB(flap)
VERB(flash)
VERB(flatten)
VERB(flip)
VERB(float)
VERB(flood)
VERB(flow)
VERB(flower)
VERB(fly)
VERB(focus)
VERB(fold)
VERB(follow)
VERB(fool)
VERB(force)
VERB(forget)
VERB(forgive)
VERB(form)
VERB(found)
VERB(freeze)
VERB(frighten)
VERB(fry)
VERB(gain)
VERB(gather)
VERB(gaze)
VERB(generate)
VERB(get)
VERB(give)
VERB(glow)
VERB(glue)
VERB(go)
VERB(grab)
VERB(grate)
VERB(grease)
VERB(greet)
VERB(grin)
VERB(grip)
VERB(groan)
VERB(grow)
VERB(guarantee)
VERB(guard)
VERB(guess)
VERB(guide)
VERB(hammer)
VERB(hand)
VERB(handle)
VERB(hang)
VERB(happen)
VERB(harass)
VERB(harm)
VERB(hate)
VERB(haunt)
VERB(head)
VERB(heal)
VERB(heap)
VERB(hear)
VERB(heat)
VERB(help)
VERB(hide)
VERB(highlight)
VERB(hit)
VERB(hold)
VERB(hook)
VERB(hop)
VERB(hope)
VERB(hover)
VERB(hug)
VERB(hum)
VERB(hunt)
VERB(hurry)
VERB(hurt)
VERB(identify)
VERB(ignore)
VERB(imagine)
VERB(import)
VERB(impress)
VERB(improve)
VERB(include)
VERB(increase)
VERB(influence)
VERB(inform)
VERB(inject)
VERB(injure)
VERB(insert)
VERB(instruct)
VERB(intend)
VERB(interest)
VERB(interfere)
VERB(interrupt)
VERB(intersect)
VERB(intersects)
VERB(introduce)
VERB(invent)
VERB(invite)
VERB(irritate)
VERB(itch)
VERB(jail)
VERB(jam)
VERB(jog)
VERB(join)
VERB(joke)
VERB(judge)
VERB(juggle)
VERB(jump)
VERB(keep)
VERB(kick)
VERB(kill)
VERB(kiss)
VERB(kneel)
VERB(knit)
VERB(knock)
VERB(knot)
VERB(know)
VERB(label)
VERB(land)
VERB(last)
VERB(laugh)
VERB(launch)
VERB(lay)
VERB(lead)
VERB(learn)
VERB(leave)
VERB(lend)
VERB(let)
VERB(level)
VERB(license)
VERB(lick)
VERB(lie)
VERB(lighten)
VERB(like)
VERB(listen)
VERB(live)
VERB(load)
VERB(localize)
VERB(lock)
VERB(long)
VERB(look)
VERB(lose)
VERB(love)
VERB(maintain)
VERB(make)
VERB(man)
VERB(manage)
VERB(march)
VERB(mark)
VERB(marry)
VERB(match)
VERB(mate)
VERB(matter)
VERB(mean)
VERB(measure)
VERB(meddle)
VERB(meet)
VERB(melt)
VERB(memorise)
VERB(mend)
VERB(merge)
VERB(mess)
VERB(milk)
VERB(mine)
VERB(miss)
VERB(minus)
VERB(mix)
VERB(moan)
VERB(moor)
VERB(mourn)
VERB(move)
VERB(muddle)
VERB(mug)
VERB(multiply)
VERB(murder)
VERB(nail)
VERB(nest)
VERB(nod)
VERB(normalize)
VERB(note)
VERB(notice)
VERB(notify)
VERB(number)
VERB(obey)
VERB(observe)
VERB(obtain)
VERB(occur)
VERB(offend)
VERB(offer)
VERB(open)
VERB(order)
VERB(overflow)
VERB(owe)
VERB(own)
VERB(pack)
VERB(paddle)
VERB(paint)
VERB(park)
VERB(part)
VERB(pass)
VERB(paste)
VERB(pat)
VERB(pause)
VERB(pay)
VERB(peck)
VERB(pedal)
VERB(peel)
VERB(peep)
VERB(perform)
VERB(permit)
VERB(phone)
VERB(pick)
VERB(pinch)
VERB(pine)
VERB(place)
VERB(plan)
VERB(plant)
VERB(play)
VERB(please)
VERB(plug)
VERB(poke)
VERB(polish)
VERB(pop)
VERB(possess)
VERB(post)
VERB(pour)
VERB(practice)
VERB(practise)
VERB(pray)
VERB(preach)
VERB(precede)
VERB(prefer)
VERB(preload)
VERB(prepare)
VERB(prepend)
VERB(present)
VERB(preserve)
VERB(press)
VERB(pretend)
VERB(prevent)
VERB(prick)
VERB(print)
VERB(produce)
VERB(program)
VERB(promise)
VERB(protect)
VERB(provide)
VERB(pull)
VERB(pump)
VERB(punch)
VERB(puncture)
VERB(punish)
VERB(push)
VERB(put)
VERB(question)
VERB(queue)
VERB(race)
VERB(radiate)
VERB(rain)
VERB(raise)
VERB(reach)
VERB(read)
VERB(realise)
VERB(receive)
VERB(recognise)
VERB(record)
VERB(reduce)
VERB(reflect)
VERB(refuse)
VERB(register)
VERB(regret)
VERB(reign)
VERB(reject)
VERB(rejoice)
VERB(relax)
VERB(release)
VERB(rely)
VERB(remain)
VERB(remember)
VERB(remind)
VERB(remove)
VERB(repair)
VERB(repeat)
VERB(replace)
VERB(reply)
VERB(report)
VERB(request)
VERB(require)
VERB(resize)
VERB(rescue)
VERB(resolve)
VERB(retain)
VERB(retire)
VERB(return)
VERB(reverse)
VERB(review)
VERB(rhyme)
VERB(ride)
VERB(ring)
VERB(rinse)
VERB(rise)
VERB(risk)
VERB(rob)
VERB(rock)
VERB(roll)
VERB(rot)
VERB(rub)
VERB(ruin)
VERB(rule)
VERB(run)
VERB(rush)
VERB(sack)
VERB(sail)
VERB(satisfy)
VERB(save)
VERB(saw)
VERB(say)
VERB(scale)
VERB(scare)
VERB(scatter)
VERB(scold)
VERB(scorch)
VERB(scrape)
VERB(scratch)
VERB(scream)
VERB(screw)
VERB(scribble)
VERB(scroll)
VERB(scrub)
VERB(seal)
VERB(search)
VERB(see)
VERB(select)
VERB(sell)
VERB(send)
VERB(separate)
VERB(serve)
VERB(settle)
VERB(shade)
VERB(share)
VERB(shave)
VERB(shelter)
VERB(shiver)
VERB(shock)
VERB(shop)
VERB(show)
VERB(shrug)
VERB(shut)
VERB(sigh)
VERB(sign)
VERB(signal)
VERB(sin)
VERB(sing)
VERB(sip)
VERB(sit)
VERB(ski)
VERB(skip)
VERB(slap)
VERB(sleep)
VERB(slip)
VERB(slow)
VERB(smash)
VERB(smell)
VERB(smile)
VERB(smoke)
VERB(snatch)
VERB(sneeze)
VERB(sniff)
VERB(snore)
VERB(snow)
VERB(soak)
VERB(soothe)
VERB(sound)
VERB(spare)
VERB(spark)
VERB(sparkle)
VERB(speak)
VERB(spell)
VERB(spend)
VERB(spill)
VERB(spoil)
VERB(spot)
VERB(spray)
VERB(sprout)
VERB(squash)
VERB(squeak)
VERB(squeal)
VERB(squeeze)
VERB(stain)
VERB(stamp)
VERB(stand)
VERB(standardise)
VERB(standardize)
VERB(stare)
VERB(start)
VERB(stay)
VERB(steer)
VERB(step)
VERB(stir)
VERB(stitch)
VERB(stop)
VERB(store)
VERB(strap)
VERB(strengthen)
VERB(stretch)
VERB(strip)
VERB(stroke)
VERB(stuff)
VERB(subtract)
VERB(succeed)
VERB(suck)
VERB(suffer)
VERB(suggest)
VERB(suit)
VERB(supply)
VERB(support)
VERB(suppose)
VERB(suppress)
VERB(surprise)
VERB(surround)
VERB(suspect)
VERB(suspend)
VERB(swim)
VERB(switch)
VERB(take)
VERB(talk)
VERB(tame)
VERB(tap)
VERB(taste)
VERB(teach)
VERB(tear)
VERB(tease)
VERB(telephone)
VERB(tell)
VERB(tempt)
VERB(terrify)
VERB(test)
VERB(thank)
VERB(thaw)
VERB(think)
VERB(throw)
VERB(tick)
VERB(tickle)
VERB(tie)
VERB(time)
VERB(tip)
VERB(tire)
VERB(toggle)
VERB(touch)
VERB(tour)
VERB(tow)
VERB(trace)
VERB(trade)
VERB(train)
VERB(translate)
VERB(transform)
VERB(transport)
VERB(trap)
VERB(travel)
VERB(traverse)
VERB(treat)
VERB(tremble)
VERB(trick)
VERB(trip)
VERB(trot)
VERB(trouble)
VERB(truncate)
VERB(trust)
VERB(try)
VERB(tug)
VERB(tumble)
VERB(turn)
VERB(twist)
VERB(understand)
VERB(undress)
VERB(unfasten)
VERB(union)
VERB(unite)
VERB(unload)
VERB(unlock)
VERB(unpack)
VERB(untidy)
VERB(up)
VERB(update)
VERB(use)
VERB(validate)
VERB(vanish)
VERB(visit)
VERB(wail)
VERB(wait)
VERB(wake)
VERB(walk)
VERB(wander)
VERB(want)
VERB(warm)
VERB(warn)
VERB(wash)
VERB(waste)
VERB(watch)
VERB(water)
VERB(wave)
VERB(wear)
VERB(weigh)
VERB(welcome)
VERB(whine)
VERB(whip)
VERB(whirl)
VERB(whisper)
VERB(whistle)
VERB(win)
VERB(wink)
VERB(wipe)
VERB(wish)
VERB(wobble)
VERB(wonder)
VERB(work)
VERB(worry)
VERB(wrap)
VERB(wreck)
VERB(wrestle)
VERB(wriggle)
VERB(write)
VERB(yawn)
VERB(yell)
VERB(zip)
VERB(zoom)
    
        StringRef Line = RawText.substr(0, Pos);
    Lines.push_back(Line);
    if (!IsFirstLine) {
      size_t NonWhitespacePos = RawText.find_first_not_of(' ');
      if (NonWhitespacePos != StringRef::npos)
        WhitespaceToTrim =
            std::min(WhitespaceToTrim,
                     static_cast<unsigned>(NonWhitespacePos));
    }
    IsFirstLine = false;
    
      // Find the last instance of the first word in the name within
  // the words in the type name.
  while (typeWordRevIter != typeWordRevIterEnd &&
         !matchNameWordToTypeWord(*nameWordIter, *typeWordRevIter)) {
    ++typeWordRevIter;
  }
    
    
    {      ExecutingTasks.push(PidTaskPair(Pid, std::move(T)));
    }
    
        /** Colorize an image (given filename) with the icon color */
    QImage SingleColorImage(const QString& filename) const;
    
    
    {private:
    Ui::TransactionDescDialog *ui;
};
    
    
    {    secp256k1_fe_sqr(&z12, &az);
    u1 = a->x; secp256k1_fe_normalize_weak(&u1);
    secp256k1_fe_mul(&u2, &b->x, &z12);
    s1 = a->y; secp256k1_fe_normalize_weak(&s1);
    secp256k1_fe_mul(&s2, &b->y, &z12); secp256k1_fe_mul(&s2, &s2, &az);
    secp256k1_fe_negate(&h, &u1, 1); secp256k1_fe_add(&h, &u2);
    secp256k1_fe_negate(&i, &s1, 1); secp256k1_fe_add(&i, &s2);
    if (secp256k1_fe_normalizes_to_zero_var(&h)) {
        if (secp256k1_fe_normalizes_to_zero_var(&i)) {
            secp256k1_gej_double_var(r, a, NULL);
        } else {
            r->infinity = 1;
        }
        return;
    }
    secp256k1_fe_sqr(&i2, &i);
    secp256k1_fe_sqr(&h2, &h);
    secp256k1_fe_mul(&h3, &h, &h2);
    r->z = a->z; secp256k1_fe_mul(&r->z, &r->z, &h);
    secp256k1_fe_mul(&t, &u1, &h2);
    r->x = t; secp256k1_fe_mul_int(&r->x, 2); secp256k1_fe_add(&r->x, &h3); secp256k1_fe_negate(&r->x, &r->x, 3); secp256k1_fe_add(&r->x, &i2);
    secp256k1_fe_negate(&r->y, &r->x, 5); secp256k1_fe_add(&r->y, &t); secp256k1_fe_mul(&r->y, &r->y, &i);
    secp256k1_fe_mul(&h3, &h3, &s1); secp256k1_fe_negate(&h3, &h3, 1);
    secp256k1_fe_add(&r->y, &h3);
}
    
    #include 'include/secp256k1_ecdh.h'
#include 'ecmult_const_impl.h'
    
    void test_bad_scalar(void) {
    unsigned char s_zero[32] = { 0 };
    unsigned char s_overflow[32] = {
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,
        0xba, 0xae, 0xdc, 0xe6, 0xaf, 0x48, 0xa0, 0x3b,
        0xbf, 0xd2, 0x5e, 0x8c, 0xd0, 0x36, 0x41, 0x41
    };
    unsigned char s_rand[32] = { 0 };
    unsigned char output[32];
    secp256k1_scalar rand;
    secp256k1_pubkey point;
    }
    
    
    
    // This helper class can be used to mock out Google Test failure reporting
// so that we can test Google Test or code that builds on Google Test.
//
// An object of this class appends a TestPartResult object to the
// TestPartResultArray object given in the constructor whenever a Google Test
// failure is reported. It can either intercept only failures that are
// generated in the same thread that created this object or it can intercept
// all generated failures. The scope of this mock object can be controlled with
// the second argument to the two arguments constructor.
class GTEST_API_ ScopedFakeTestPartResultReporter
    : public TestPartResultReporterInterface {
 public:
  // The two possible mocking modes of this object.
  enum InterceptMode {
    INTERCEPT_ONLY_CURRENT_THREAD,  // Intercepts only thread local failures.
    INTERCEPT_ALL_THREADS           // Intercepts all failures.
  };
    }
    
    
    {  EXPECT_FALSE(IsPrime(-1));
  EXPECT_FALSE(IsPrime(-2));
  EXPECT_FALSE(IsPrime(INT_MIN));
}
    
    
    {  return clone;
}
    
    
    {  EXPECT_EQ(0u, s.Length());
}
    
      // Gets the first element of the queue, or NULL if the queue is empty.
  QueueNode<E>* Head() { return head_; }
  const QueueNode<E>* Head() const { return head_; }
    
    //for variant
template <>
struct GetTypeInfo<Variant> {
	static const Variant::Type VARIANT_TYPE = Variant::NIL;
	static inline PropertyInfo get_class_info() {
		return PropertyInfo(Variant::NIL, String(), PROPERTY_HINT_NONE, String(), PROPERTY_USAGE_DEFAULT | PROPERTY_USAGE_NIL_IS_VARIANT);
	}
};
    
    #ifndef BULLET_TYPES_CONVERTER_H
#define BULLET_TYPES_CONVERTER_H
    
    /**
	@author AndreaCatania
*/
    
    /**
	@author AndreaCatania
*/
    
    public:
	/// Reference frame is A
	SliderJointBullet(RigidBodyBullet *rbA, RigidBodyBullet *rbB, const Transform &frameInA, const Transform &frameInB);
    
    void unregister_dds_types() {
    }
    
    
    {	alloc_mutex = Mutex::create();
}
    
    
    {	id = 0;
}

    
    
    {	ADD_SIGNAL(MethodInfo('peer_connected', PropertyInfo(Variant::INT, 'id')));
	ADD_SIGNAL(MethodInfo('peer_disconnected', PropertyInfo(Variant::INT, 'id')));
	ADD_SIGNAL(MethodInfo('server_disconnected'));
	ADD_SIGNAL(MethodInfo('connection_succeeded'));
	ADD_SIGNAL(MethodInfo('connection_failed'));
}
    
        va_end(params);
    
    return ret;
}
#else
Spawn* Spawn::create(FiniteTimeAction *action1, ...)
{
    va_list params;
    va_start(params, action1);
    
        int count = 0;
    auto limit = element->actions->num;
    for(int i = 0; i < limit; ++i)
    {
        auto action = static_cast<Action*>(element->actions->arr[i]);
        if(action->getTag() == tag)
            ++count;
    }
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __ACTION_CCPROGRESS_TIMER_H__
#define __ACTION_CCPROGRESS_TIMER_H__
    
    
    {}
    
    //---- Define constructor and implicit cast operators to convert back<>forth between your math types and ImVec2/ImVec4.
// This will be inlined as part of ImVec2 and ImVec4 class declarations.
/*
#define IM_VEC2_CLASS_EXTRA                                                 \
        ImVec2(const MyVec2& f) { x = f.x; y = f.y; }                       \
        operator MyVec2() const { return MyVec2(x,y); }
    
    
    {    // 3. Show another simple window.
    if (show_another_window)
    {
        ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
        ImGui::Text('Hello from another window!');
        if (ImGui::Button('Close Me'))
            show_another_window = false;
        ImGui::End();
    }
}
    
                ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
    struct VERTEX_CONSTANT_BUFFER
{
    float   mvp[4][4];
};
    
    
    {    return true;
}
    
        g_MouseCursors[ImGuiMouseCursor_Arrow] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_ARROW);
    g_MouseCursors[ImGuiMouseCursor_TextInput] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_IBEAM);
    g_MouseCursors[ImGuiMouseCursor_ResizeAll] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_SIZEALL);
    g_MouseCursors[ImGuiMouseCursor_ResizeNS] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_SIZENS);
    g_MouseCursors[ImGuiMouseCursor_ResizeEW] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_SIZEWE);
    g_MouseCursors[ImGuiMouseCursor_ResizeNESW] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_SIZENESW);
    g_MouseCursors[ImGuiMouseCursor_ResizeNWSE] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_SIZENWSE);
    g_MouseCursors[ImGuiMouseCursor_Hand] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_HAND);
    
      /**
   * @brief Send messages
   * @param frames The messages to send.
   * @param frame_num The amount of messages to send.
   * @return The status of the sending action which is defined by
   *         apollo::common::ErrorCode.
   */
  virtual apollo::common::ErrorCode Send(const std::vector<CanFrame> &frames,
                                         int32_t *const frame_num) = 0;
    
    TEST(HermesCanClient, init) {
  CANCardParameter param;
  param.set_brand(CANCardParameter::HERMES_CAN);
  param.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
  HermesCanClient hermes_can;
  EXPECT_TRUE(hermes_can.Init(param));
  //    EXPECT_EQ(hermes_can.Start(), ErrorCode::CAN_CLIENT_ERROR_BASE);
  //      EXPECT_EQ(hermes_can.Start(), ErrorCode::OK);
}
    
    /**
 * @class ProtocolData
 *
 * @brief This is the base class of protocol data.
 */
template <typename SensorType>
class ProtocolData {
 public:
  /**
   * @brief static function, used to calculate the checksum of input array.
   * @param input the pointer to the start position of input array
   * @param length the length of the input array
   * @return the value of checksum
   */
  static std::uint8_t CalculateCheckSum(const uint8_t *input,
                                        const uint32_t length);
  /**
   * @brief construct protocol data.
   */
  ProtocolData() = default;
    }
    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo
    
    // System gflags
DEFINE_string(sensor_node_name, '', 'Sensor node name.');
