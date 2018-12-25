
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/op_kernel.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    // Functions for getting information about kernels registered in the binary.
#ifndef TENSORFLOW_PYTHON_UTIL_KERNEL_REGISTRY_H_
#define TENSORFLOW_PYTHON_UTIL_KERNEL_REGISTRY_H_
    
    // TaskRunner implementation that posts tasks into libuv's default loop.
class UvTaskRunner : public base::SingleThreadTaskRunner {
 public:
  explicit UvTaskRunner(uv_loop_t* loop);
    }
    
    #endif  // ATOM_BROWSER_API_ATOM_API_AUTO_UPDATER_H_

    
    template <>
struct Converter<in_app_purchase::Payment> {
  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate,
                                   const in_app_purchase::Payment& payment) {
    mate::Dictionary dict = mate::Dictionary::CreateEmpty(isolate);
    dict.SetHidden('simple', true);
    dict.Set('productIdentifier', payment.productIdentifier);
    dict.Set('quantity', payment.quantity);
    return dict.GetHandle();
  }
};
    
    class InAppPurchase : public mate::EventEmitter<InAppPurchase>,
                      public in_app_purchase::TransactionObserver {
 public:
  static mate::Handle<InAppPurchase> Create(v8::Isolate* isolate);
    }
    
    namespace mate {
template <>
struct Converter<ui::IdleState> {
  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate,
                                   const ui::IdleState& in) {
    switch (in) {
      case ui::IDLE_STATE_ACTIVE:
        return mate::StringToV8(isolate, 'active');
      case ui::IDLE_STATE_IDLE:
        return mate::StringToV8(isolate, 'idle');
      case ui::IDLE_STATE_LOCKED:
        return mate::StringToV8(isolate, 'locked');
      case ui::IDLE_STATE_UNKNOWN:
      default:
        return mate::StringToV8(isolate, 'unknown');
    }
  }
};
}  // namespace mate
    
    namespace gfx {
class Image;
}
    
    #ifndef ATOM_BROWSER_API_EVENT_H_
#define ATOM_BROWSER_API_EVENT_H_
    
    #endif  // ATOM_BROWSER_API_SAVE_PAGE_HANDLER_H_

    
    namespace api {
class WebContents;
}
    
      // Gets/Sets the delegate.
  static Delegate* GetDelegate();
  static void SetDelegate(Delegate* delegate);
    
    StringRef swift::platformString(PlatformKind platform) {
  switch (platform) {
  case PlatformKind::none:
    return '*';
#define AVAILABILITY_PLATFORM(X, PrettyName)                                   \
  case PlatformKind::X:                                                        \
    return #X;
#include 'swift/AST/PlatformKinds.def'
  }
  llvm_unreachable('bad PlatformKind');
}
    
      // This is a substitution function from the generic parameters of the
  // conforming type to the synthetic environment.
  //
  // For structs, enums and protocols, this is a 1:1 mapping; for classes,
  // we increase the depth of each generic parameter by 1 so that we can
  // introduce a class-bound 'Self' parameter.
  //
  // This is a raw function rather than a substitution map because we need to
  // keep generic parameters as generic, even if the conformanceSig (the best
  // way to create the substitution map) equates them to concrete types.
  auto conformanceToSyntheticTypeFn = [&](SubstitutableType *type) {
    auto *genericParam = cast<GenericTypeParamType>(type);
    if (covariantSelf) {
      return GenericTypeParamType::get(genericParam->getDepth() + 1,
                                       genericParam->getIndex(), ctx);
    }
    }
    
      /// Retrieve the generic signature that describes the shape of this
  /// storage.
  GenericSignature *getGenericSignature() const { return genericSig; }
    
    void CacheImpl::setAndRetain(void *Key, void *Value, size_t Cost) {
  DefaultCache &DCache = *static_cast<DefaultCache*>(Impl);
  llvm::sys::ScopedLock L(DCache.Mux);
    }
    
    #include 'swift/Basic/Cache.h'
#include 'llvm/ADT/SmallString.h'
#include <cache.h>
    
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
    
    StringRef importer::getCFTypeName(
            const clang::TypedefNameDecl *decl) {
  if (auto pointee = CFPointeeInfo::classifyTypedef(decl)) {
    auto name = decl->getName();
    if (pointee.isRecord() || pointee.isTypedef())
      if (name.endswith(SWIFT_CFTYPE_SUFFIX))
        return name.drop_back(strlen(SWIFT_CFTYPE_SUFFIX));
    }
    }
    
      bool isSetter() const {
    return accessorKind == IAMAccessorKind::Setter;
  }
    
    
bool MenuDelegate::GetAcceleratorForCommandId(
      int command_id,
      ui::Accelerator* accelerator) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
    }
    
    // Popup menus may get squished if they open up too close to the bottom of the
// screen. This function takes the size of the screen, the size of the menu,
// an optional widget, the Y position of the mouse click, and adjusts the popup
// menu's Y position to make it fit if it's possible to do so.
// Returns the new Y position of the popup menu.
int CalculateMenuYPosition(const GdkRectangle* screen_rect,
                           const GtkRequisition* menu_req,
                           GtkWidget* widget, const int y) {
  CHECK(screen_rect);
  CHECK(menu_req);
  // If the menu would run off the bottom of the screen, and there is enough
  // screen space upwards to accommodate the menu, then pop upwards. If there
  // is a widget, then also move the anchor point to the top of the widget
  // rather than the bottom.
  const int screen_top = screen_rect->y;
  const int screen_bottom = screen_rect->y + screen_rect->height;
  const int menu_bottom = y + menu_req->height;
  int alternate_y = y - menu_req->height;
  if (widget) {
    GtkAllocation allocation;
    gtk_widget_get_allocation(widget, &allocation);
    alternate_y -= allocation.height;
  }
  if (menu_bottom >= screen_bottom && alternate_y >= screen_top)
    return alternate_y;
  return y;
}
    
      if (type == 'separator') {
    menu_item_ = gtk_separator_menu_item_new();
  } else {
    if (type == 'checkbox') {
      menu_item_ = gtk_check_menu_item_new();
      bool checked;
      if (option.GetBoolean('checked', &checked))
        SetChecked(checked);
    } else {
      menu_item_ = gtk_image_menu_item_new();
      std::string icon;
      if (option.GetString('icon', &icon))
        SetIcon(icon);
    }
    }
    
          if (data.type == TYPE_PNG &&
         !gfx::PNGCodec::EncodeBGRASkBitmap(bitmap, false, &encoded_image)) {
        LOG(INFO) << 'NwClipboardGetSyncFunction::RunSync(' << nwapi::nw__clipboard::ToString(data.type) << ') failed when converting to PNG';
        error_ = 'Failed to encode as PNG';
        return false;
      } else if (data.type == TYPE_JPEG &&
                 !gfx::JPEGCodec::Encode(bitmap, kQuality, &encoded_image)) {
        LOG(INFO) << 'NwClipboardGetSyncFunction::RunSync(' << nwapi::nw__clipboard::ToString(data.type) << ') failed when converting to JPEG';
        error_ = 'Failed to encode as JPEG';
        return false;
      }
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Clipboard.clearSync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardClearSyncFunction);
};
    
    class NwMenuGetNSStringWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringWithFixupFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringWithFixupFunction);
};
    
      NwScreenDisplayObserver::NwScreenDisplayObserver() {
    display::Screen* screen = display::Screen::GetScreen();
    if (screen) {
      screen->AddObserver(this);
    }
  }
    
    // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
int32_t IntDotProductSSE(const int8_t* u, const int8_t* v, int n) {
  int max_offset = n - 8;
  int offset = 0;
  // Accumulate a set of 4 32-bit sums in sum, by loading 8 pairs of 8-bit
  // values, extending to 16 bit, multiplying to make 32 bit results.
  __m128i sum = _mm_setzero_si128();
  if (offset <= max_offset) {
    offset = 8;
    __m128i packed1 = _mm_loadl_epi64(reinterpret_cast<const __m128i*>(u));
    __m128i packed2 = _mm_loadl_epi64(reinterpret_cast<const __m128i*>(v));
    sum = _mm_cvtepi8_epi16(packed1);
    packed2 = _mm_cvtepi8_epi16(packed2);
    // The magic _mm_add_epi16 is perfect here. It multiplies 8 pairs of 16 bit
    // ints to make 32 bit results, which are then horizontally added in pairs
    // to make 4 32 bit results that still fit in a 128 bit register.
    sum = _mm_madd_epi16(sum, packed2);
    while (offset <= max_offset) {
      packed1 = _mm_loadl_epi64(reinterpret_cast<const __m128i*>(u + offset));
      packed2 = _mm_loadl_epi64(reinterpret_cast<const __m128i*>(v + offset));
      offset += 8;
      packed1 = _mm_cvtepi8_epi16(packed1);
      packed2 = _mm_cvtepi8_epi16(packed2);
      packed1 = _mm_madd_epi16(packed1, packed2);
      sum = _mm_add_epi32(sum, packed1);
    }
  }
  // Sum the 4 packed 32 bit sums and extract the low result.
  sum = _mm_hadd_epi32(sum, sum);
  sum = _mm_hadd_epi32(sum, sum);
  int32_t result = _mm_cvtsi128_si32(sum);
  while (offset < n) {
    result += u[offset] * v[offset];
    ++offset;
  }
  return result;
}
    
      // Iterate over the blobs inside to_block, and set the blobs that we want to
  // process to BSTT_NONE. (By default, they should be BSTT_SKIP). The function
  // returns 0 upon success.
  int LabelSpecialText(TO_BLOCK* to_block);
    
    int os_detect_blobs(const GenericVector<int>* allowed_scripts,
                    BLOBNBOX_CLIST* blob_list,
                    OSResults* osr,
                    tesseract::Tesseract* tess);
    
    #include 'blread.h'
#include <cstdio>       // for fclose, fopen, FILE
#include 'host.h'       // for TRUE
#include 'ocrblock.h'   // for BLOCK_IT, BLOCK, BLOCK_LIST (ptr only)
#include 'scanutils.h'  // for tfscanf
    
    struct TWERD;
    
    ScientificNumberFormatter *ScientificNumberFormatter::createMarkupInstance(
        const Locale &locale,
        const UnicodeString &beginMarkup,
        const UnicodeString &endMarkup,
        UErrorCode &status) {
    return createInstance(
            static_cast<DecimalFormat *>(
                    DecimalFormat::createScientificInstance(locale, status)),
            new MarkupStyle(beginMarkup, endMarkup),
            status);
}
    
    SelectFormat::~SelectFormat() {
}
    
    class U_I18N_API SharedPluralRules : public SharedObject {
public:
    SharedPluralRules(PluralRules *prToAdopt) : ptr(prToAdopt) { }
    virtual ~SharedPluralRules();
    const PluralRules *operator->() const { return ptr; }
    const PluralRules &operator*() const { return *ptr; }
private:
    PluralRules *ptr;
    SharedPluralRules(const SharedPluralRules &);
    SharedPluralRules &operator=(const SharedPluralRules &);
};
    
    U_NAMESPACE_BEGIN
    
    
/**
 * A formatter for small, positive integers.
 */
class U_I18N_API SmallIntFormatter : public UMemory {
public:
    /**
     * Estimates the actual digit count needed to format positiveValue
     * using the given range of digit counts.
     * Returns a value that is at least the actual digit count needed.
     *
     * @param positiveValue the value to format
     * @param range the acceptable range of digit counts.
     */
    static int32_t estimateDigitCount(
            int32_t positiveValue, const IntDigitCountRange &range);
    }
    
        UDateFormatField patternCharIndex = DateFormatSymbols::getPatternCharIndex(ch);
    const int32_t maxIntCount = 10;
    int32_t beginOffset = appendTo.length();
    NumberFormat *currentNumberFormat;
    DateFormatSymbols::ECapitalizationContextUsageType capContextUsageType = DateFormatSymbols::kCapContextUsageOther;
    
    bool Action::isDone() const
{
    return true;
}
    
    // implementation of Grid3DAction
    
    //
// Place
//
    
    void ActionManager::removeAllActions()
{
    for (tHashElement *element = _targets; element != nullptr; )
    {
        auto target = element->target;
        element = (tHashElement*)element->hh.next;
        removeAllActionsFromTarget(target);
    }
}
    
        coords.bl.x += (step.x / 2) * (1.0f - distance);
    coords.bl.y += (step.y / 2) * (1.0f - distance);
    
    /** Read an NSDictionary from a plist file and parse it automatically for animations */
void AnimationCache::addAnimationsWithFile(const std::string& plist)
{
    CCASSERT(!plist.empty(), 'Invalid texture file name');
    if (plist.empty()) {
        log('%s error:file name is empty!', __FUNCTION__);
        return;
    }
    
    ValueMap dict = FileUtils::getInstance()->getValueMapFromFile(plist);
    }
    
    @since v0.99.5
@js cc.animationCache
*/
class CC_DLL AnimationCache : public Ref
{
public:
    /**
     * @js ctor
     */
    AnimationCache();
    /**
     * @js NA
     * @lua NA
     */
    ~AnimationCache();
    /** Returns the shared instance of the Animation cache 
	 @js NA
	*/
    static AnimationCache* getInstance();
    }
    
    
    {}