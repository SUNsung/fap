
        
        Optional<PlatformKind> swift::platformFromString(StringRef Name) {
  if (Name == '*')
    return PlatformKind::none;
  return llvm::StringSwitch<Optional<PlatformKind>>(Name)
#define AVAILABILITY_PLATFORM(X, PrettyName) .Case(#X, PlatformKind::X)
#include 'swift/AST/PlatformKinds.def'
      .Case('macOS', PlatformKind::OSX)
      .Case('macOSApplicationExtension', PlatformKind::OSXApplicationExtension)
      .Default(Optional<PlatformKind>());
}
    
    #include 'swift/AST/SyntaxASTMap.h'
#include 'swift/AST/Expr.h'
#include 'swift/AST/Decl.h'
#include 'swift/AST/Stmt.h'
#include 'swift/Syntax/Syntax.h'
    
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
    
    from GYBUnicodeDataUtils import GraphemeClusterBreakPropertyTable, get_extended_grapheme_cluster_rules_matrix
    
        void emitCodeContext(clang::FullSourceLoc Loc,
                         clang::DiagnosticsEngine::Level Level,
                         SmallVectorImpl<clang::CharSourceRange>& Ranges,
                         ArrayRef<clang::FixItHint> Hints) override {}
    
    #ifndef UINT32_MAX
    #define UINT32_MAX (4294967295U)
#endif
    
    namespace CAROTENE_NS {
    }
    
            for (; j < roiw16; j += 16)
        {
            internal::prefetch(src + j);
            internal::prefetch(dst + j);
            uint8x16_t v_src = vld1q_u8(src + j);
            int16x8_t v_dst0 = vld1q_s16(dst + j);
            int16x8_t v_dst1 = vld1q_s16(dst + j + 8);
            int16x8_t v_src0 = vreinterpretq_s16_u16(vmovl_u8(vget_low_u8(v_src)));
            int16x8_t v_src1 = vreinterpretq_s16_u16(vmovl_u8(vget_high_u8(v_src)));
            v_dst0 = vqaddq_s16(v_dst0, v_src0);
            v_dst1 = vqaddq_s16(v_dst1, v_src1);
            vst1q_s16(dst + j, v_dst0);
            vst1q_s16(dst + j + 8, v_dst1);
        }
        for (; j < roiw8; j += 8)
        {
            uint8x8_t v_src = vld1_u8(src + j);
            int16x8_t v_src16 = vreinterpretq_s16_u16(vmovl_u8(v_src));
            int16x8_t v_dst = vld1q_s16(dst + j);
            v_dst = vqaddq_s16(v_dst, v_src16);
            vst1q_s16(dst + j, v_dst);
        }
    
            const s32* ln0 = idx_rm1 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rm1) : tmp;
        const s32* ln1 = internal::getRowPtr(srcBase, srcStride, i);
        const s32* ln2 = internal::getRowPtr(srcBase, srcStride, i + 1);
        const s32* ln3 = idx_rp2 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rp2) : tmp;
    
        for (size_t i = 0u; i < size.height; ++i)
    {
        const u8 * src = internal::getRowPtr(srcBase, srcStride, i);
        u8 * dst = internal::getRowPtr(dstBase, dstStride, i);
        size_t sj = 0u, dj = 0u;
    }
    
                uint32x4_t vlx1 = vmvnq_u32(vequ1);
            uint32x4_t vlx2 = vmvnq_u32(vequ2);
            uint32x4_t vlx3 = vmvnq_u32(vequ3);
            uint32x4_t vlx4 = vmvnq_u32(vequ4);
    
                vec128 v_src = vld3q(src + js), v_dst;
            v_src.val[0] = vrev64q(v_src.val[0]);
            v_src.val[1] = vrev64q(v_src.val[1]);
            v_src.val[2] = vrev64q(v_src.val[2]);
    
            size_t x = 0;
        for (; x <= colsn - 8; x += 8)
        {
            internal::prefetch(internal::getRowPtr(ln2 + x, srcStride, x % 5 - 2));
            uint8x8_t v0 = vld1_u8(ln0+x);
            uint8x8_t v1 = vld1_u8(ln1+x);
            uint8x8_t v2 = vld1_u8(ln2+x);
            uint8x8_t v3 = vld1_u8(ln3+x);
            uint8x8_t v4 = vld1_u8(ln4+x);
    }
    
    
    {        smoothedGradientMatrix->template AdaDeltaUpdate<GradType>(*gradientMatrix, parameterMatrix, (AccumType)learningRate, (AccumType)m_rho, (AccumType)m_epsilon, timestamps, currentTimestamp);
    }
    
    #pragma once
    
    
    {                unpackedShape = unpackedShape.AppendShape({ packedDataLayout->GetNumSequences() });
            }
            else if (!sampleDynamicAxes.empty())
                LogicError('A PackedValue object that does not have a layout cannot have any dynamic axes.');
    
    
    {    std::string GetCallStack(size_t skipLevels = 0, bool makeFunctionNamesStandOut = false);
};
    
        virtual void /*ComputationNode::*/ ForwardProp(const FrameRange& fr) override
    {
        auto sliceInputValue  = InputRef(0).ValueFor(fr);
        auto sliceOutputValue =           ValueFor(fr); // row vector
    }
    
    Status BuildTable(const std::string& dbname,
                  Env* env,
                  const Options& options,
                  TableCache* table_cache,
                  Iterator* iter,
                  FileMetaData* meta) {
  Status s;
  meta->file_size = 0;
  iter->SeekToFirst();
    }
    
      std::vector<std::string> filenames;
  env_->GetChildren(dbname_, &filenames);  // Ignoring errors on purpose
  uint64_t number;
  FileType type;
  for (size_t i = 0; i < filenames.size(); i++) {
    if (ParseFileName(filenames[i], &number, &type)) {
      bool keep = true;
      switch (type) {
        case kLogFile:
          keep = ((number >= versions_->LogNumber()) ||
                  (number == versions_->PrevLogNumber()));
          break;
        case kDescriptorFile:
          // Keep my manifest file, and any newer incarnations'
          // (in case there is a race that allows other incarnations)
          keep = (number >= versions_->ManifestFileNumber());
          break;
        case kTableFile:
          keep = (live.find(number) != live.end());
          break;
        case kTempFile:
          // Any temp files that are currently being written to must
          // be recorded in pending_outputs_, which is inserted into 'live'
          keep = (live.find(number) != live.end());
          break;
        case kCurrentFile:
        case kDBLockFile:
        case kInfoLogFile:
          keep = true;
          break;
      }
    }
    }
    
    #endif  // STORAGE_LEVELDB_DB_LOG_FORMAT_H_

    
      // Compute the crc of the record type and the payload.
  uint32_t crc = crc32c::Extend(type_crc_[t], ptr, n);
  crc = crc32c::Mask(crc);                 // Adjust for storage
  EncodeFixed32(buf, crc);
    
    namespace leveldb {
    }
    
    
    {REGISTER_INTERNAL(KafkaTopicsConfigParserPlugin,
                  'config_parser',
                  'kafka_topics');
} // namespace osquery

    
    namespace osquery {
    }
    
      // Generate content to update/add to the config.
  std::string content;
  auto s = readFile(kTestDataPath + 'test_parse_items.conf', content);
  EXPECT_TRUE(s.ok());
  std::map<std::string, std::string> config;
  config['awesome'] = content;
    
    #include <osquery/config.h>
#include <osquery/database.h>
#include <osquery/registry.h>
    
      auto obj = data_.getObject();
  data_.copyFrom(cv->second.doc(), obj);
  data_.add('views', obj);
    
    TEST_F(PacksTests, test_should_pack_execute) {
  Pack kpack('unrestricted_pack', getUnrestrictedPack().doc());
  EXPECT_TRUE(kpack.shouldPackExecute());
    }
    
    class TestTablePlugin : public TablePlugin {
 public:
  void testSetCache(size_t step, size_t interval) {
    QueryData r;
    QueryContext ctx;
    ctx.useCache(true);
    setCache(step, interval, ctx, r);
  }
    }
    
    void Initializer::platformTeardown() {
  // Before we shutdown, we must insure to free the COM libs in windows
  ::CoUninitialize();
}
    
      // inotify will not monitor recursively, new directories need watches.
  if (sc->recursive && ec->action == 'CREATED' && isDirectory(ec->path)) {
    const_cast<INotifyEventPublisher*>(this)->addMonitor(
        ec->path + '/',
        const_cast<INotifySubscriptionContextRef&>(sc),
        sc->mask,
        true);
  }
    
    /**
 * @brief Event details for INotifyEventPublisher events.
 */
struct INotifyEventContext : public EventContext {
  /// The inotify_event structure if the EventSubscriber want to interact.
  std::unique_ptr<struct inotify_event> event{nullptr};
    }
    
    
    {    smallest_ever_ = smallest_subscription;
  }
    
    namespace aria2 {
    }
    
    #endif // D_DHT_TASK_H

    
    namespace aria2 {
    }
    
    void DHTTokenUpdateCommand::preProcess()
{
  if (getDownloadEngine()->getRequestGroupMan()->downloadFinished() ||
      getDownloadEngine()->isHaltRequested()) {
    enableExit();
  }
}
    
    void DNSCache::put(const std::string& hostname, const std::string& ipaddr,
                   uint16_t port)
{
  auto target = std::make_shared<CacheEntry>(hostname, port);
  auto i = entries_.lower_bound(target);
  if (i != entries_.end() && *(*i) == *target) {
    (*i)->add(ipaddr);
  }
  else {
    target->add(ipaddr);
    entries_.insert(i, target);
  }
}
    
      void put(const std::string& hostname, const std::string& ipaddr,
           uint16_t port);