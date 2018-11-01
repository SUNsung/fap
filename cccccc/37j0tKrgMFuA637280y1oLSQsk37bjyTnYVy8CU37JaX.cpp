
        
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
    
    void SILLayout::Profile(llvm::FoldingSetNodeID &id,
                        CanGenericSignature Generics,
                        ArrayRef<SILField> Fields) {
  id.AddPointer(Generics.getPointer());
  for (auto &field : Fields) {
    id.AddPointer(field.getLoweredType().getPointer());
    id.AddBoolean(field.isMutable());
  }
}

    
    namespace swift {
    }
    
    void CacheImpl::destroy() {
  cache_destroy(static_cast<cache_t*>(Impl));
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
    
      const llvm::UTF8 *SourceNext = SourceStart;
  llvm::UTF32 C[2];
  llvm::UTF32 *TargetStart = C;
    
    %# Ignore the following admonition; it applies to the resulting .cpp file only
//// Automatically Generated From UnicodeExtendedGraphemeClusters.cpp.gyb.
//// Do Not Edit Directly!
//===----------------------------------------------------------------------===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2014 - 2017 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See https://swift.org/LICENSE.txt for license information
// See https://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//
    
    OPERATOR_SCHEMA(Glu)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc(R'DOC(
Applies gated linear unit to the input Tensor X. The output Y is half the size
of the input X, so if the shape of X is [d1, d2, ..., N] shape of Y will be
[d1, d2, ..., dn/2] and Y(:dn-1, i) = GLU(X(:dn-1, i), X(:dn-1, i+N/2)) =
X(dn-1, i) * sigmoid(X(dn-1, i+N/2))
)DOC')
    .Input(0, 'X', '1D input tensor')
    .Output(0, 'Y', '1D output tensor');
    
    /*!
 * \brief Whether to customize global PRNG.
 */
#ifndef XGBOOST_CUSTOMIZE_GLOBAL_PRNG
#define XGBOOST_CUSTOMIZE_GLOBAL_PRNG XGBOOST_STRICT_R_MODE
#endif
    
    
    {    for (size_t i = 0; i < batch.size; ++i) {
      offset_[i + 1] = (i + 1) * num_col_;
      Row<IndexType> row = batch[i];
      for (uint32_t j = 0; j < num_col_; ++j) {
        dense_index_[i * num_col_ + j] = j;
      }
      for (unsigned k = 0; k < row.length; ++k) {
        uint32_t index = row.get_index(k);
        CHECK_LT(index, num_col_)
            << 'Featuere index larger than num_col';
        dense_value_[i * num_col_ + index]  = row.get_value(k);
      }
    }
    out_ = batch;
    out_.index = dmlc::BeginPtr(dense_index_);
    out_.value = dmlc::BeginPtr(dense_value_);
    out_.offset = dmlc::BeginPtr(offset_);
    return true;
  }
    
      inline void ParseStr(std::string *tok) {
    while ((ch_buf_ = this->GetChar()) != EOF) {
      switch (ch_buf_) {
        case '\\': *tok += this->GetChar(); break;
        case '\'': return;
        case '\r':
        case '\n': LOG(FATAL)<< 'ConfigReader: unterminated string';
        default: *tok += ch_buf_;
      }
    }
    LOG(FATAL) << 'ConfigReader: unterminated string';
  }
  inline void ParseStrML(std::string *tok) {
    while ((ch_buf_ = this->GetChar()) != EOF) {
      switch (ch_buf_) {
        case '\\': *tok += this->GetChar(); break;
        case '\'': return;
        default: *tok += ch_buf_;
      }
    }
    LOG(FATAL) << 'unterminated string';
  }
  // return newline
  inline bool GetNextToken(std::string *tok) {
    tok->clear();
    bool new_line = false;
    while (ch_buf_ != EOF) {
      switch (ch_buf_) {
        case '#' : SkipLine(); new_line = true; break;
        case '\'':
          if (tok->length() == 0) {
            ParseStr(tok); ch_buf_ = this->GetChar(); return new_line;
          } else {
            LOG(FATAL) << 'ConfigReader: token followed directly by string';
          }
        case '\'':
          if (tok->length() == 0) {
            ParseStrML(tok); ch_buf_ = this->GetChar(); return new_line;
          } else {
            LOG(FATAL) << 'ConfigReader: token followed directly by string';
          }
        case '=':
          if (tok->length() == 0) {
            ch_buf_ = this->GetChar();
            *tok = '=';
          }
          return new_line;
        case '\r':
        case '\n':
          if (tok->length() == 0) new_line = true;
        case '\t':
        case ' ' :
          ch_buf_ = this->GetChar();
          if (tok->length() != 0) return new_line;
          break;
        default:
          *tok += ch_buf_;
          ch_buf_ = this->GetChar();
          break;
      }
    }
    if (tok->length() == 0) {
      return true;
    } else {
      return false;
    }
  }
};
/*!
 * \brief an iterator use stream base, allows use all types of istream
 */
class ConfigStreamReader: public ConfigReaderBase {
 public:
  /*!
   * \brief constructor
   * \param fin istream input stream
   */
  explicit ConfigStreamReader(std::istream &fin) : fin_(fin) {}
    
        const size_t* begin = dmlc::BeginPtr(row_indices_);
    const size_t* end = dmlc::BeginPtr(row_indices_) + row_indices_.size();
    elem_of_each_node_.emplace_back(Elem(begin, end, 0));
  }
  // split rowset into two
  inline void AddSplit(unsigned node_id,
                       const std::vector<Split>& row_split_tloc,
                       unsigned left_node_id,
                       unsigned right_node_id) {
    const Elem e = elem_of_each_node_[node_id];
    const auto nthread = static_cast<bst_omp_uint>(row_split_tloc.size());
    CHECK(e.begin != nullptr);
    size_t* all_begin = dmlc::BeginPtr(row_indices_);
    size_t* begin = all_begin + (e.begin - all_begin);
    
    /*!
 * \brief Registry entry for sparse page format.
 */
struct SparsePageFormatReg
    : public dmlc::FunctionRegEntryBase<SparsePageFormatReg,
                                        std::function<SparsePageFormat* ()> > {
};
    
      for (auto alphabet_size : test_cases) {
    for (int i = 0; i < repetitions; i++) {
      std::vector<int> input(num_elements);
      std::generate(input.begin(), input.end(),
        [=]() { return rand() % alphabet_size; });
      CompressedBufferWriter cbw(alphabet_size);
    }
    }
    
    
    {/// KafkaTopicsConfigParserPlugin extracts, updates, and parses Kafka topic
/// configurations from Osquery's configurations.
class KafkaTopicsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override;
  Status update(const std::string& source, const ParserConfig& config) override;
};
} // namespace osquery

    
      // Send our synthetic config.
  s = c.update(config);
  EXPECT_TRUE(s.ok());
  EXPECT_EQ(s.toString(), 'OK');
    
    TEST_F(ViewsConfigParserPluginTests, test_add_view) {
  Config c;
  auto s = c.update(getTestConfigMap());
  EXPECT_TRUE(s.ok());
    }
    
    
    {/**
 * @brief Compute a hash digest from the contents of a buffer.
 *
 * @param hash_type The osquery-supported hash algorithm.
 * @param buffer A caller-controlled buffer (already allocated).
 * @param size The length of buffer in bytes.
 * @return A string (hex) representation of the hash digest.
 */
std::string hashFromBuffer(HashType hash_type, const void* buffer, size_t size);
} // namespace osquery

    
    TEST_F(TablesTests, test_constraint_map_cast) {
  ConstraintMap cm;
    }
    
      /// Fork an extension process.
  virtual void createExtension(const std::string& extension);
    
        std::unique_ptr<DHTMessageFactory> messageFactory;
    
    namespace aria2 {
    }
    
    DHTRoutingTable::~DHTRoutingTable() = default;
    
    
    {
    {    nodes.push_back(node);
  }
  localNode_ = localNode;
  nodes_ = nodes;
  A2_LOG_INFO('DHT routing table was loaded successfully');
}
    
    void DHTRoutingTableSerializer::setNodes(
    const std::vector<std::shared_ptr<DHTNode>>& nodes)
{
  nodes_ = nodes;
}
    
    
    {} // namespace aria2
    
    void DHTTaskExecutor::update()
{
  execTasks_.erase(std::remove_if(execTasks_.begin(), execTasks_.end(),
                                  std::mem_fn(&DHTTask::finished)),
                   execTasks_.end());
  int r;
  if (static_cast<size_t>(numConcurrent_) > execTasks_.size()) {
    r = numConcurrent_ - execTasks_.size();
  }
  else {
    r = 0;
  }
  while (r && !queue_.empty()) {
    std::shared_ptr<DHTTask> task = queue_.front();
    queue_.pop_front();
    task->startup();
    if (!task->finished()) {
      execTasks_.push_back(task);
      --r;
    }
  }
  A2_LOG_DEBUG(fmt('Executing %u Task(s). Queue has %u task(s).',
                   static_cast<unsigned int>(getExecutingTaskSize()),
                   static_cast<unsigned int>(getQueueSize())));
}
    
      void addTask(const std::shared_ptr<DHTTask>& task) { queue_.push_back(task); }
    
      virtual std::shared_ptr<DHTTask>
  createNodeLookupTask(const unsigned char* targetID) = 0;
    
    void DHTTaskFactoryImpl::setCommonProperty(
    const std::shared_ptr<DHTAbstractTask>& task)
{
  task->setRoutingTable(routingTable_);
  task->setMessageDispatcher(dispatcher_);
  task->setMessageFactory(factory_);
  task->setTaskQueue(taskQueue_);
  task->setLocalNode(localNode_);
}
    
      virtual std::shared_ptr<DHTTask>
  createNodeLookupTask(const unsigned char* targetID) CXX11_OVERRIDE;
    
    #include 'DHTNode.h'
#include 'util.h'
#include 'a2functional.h'
    
      virtual ~DHTUnknownMessage();
    
    DNSCache::DNSCache(const DNSCache& c) = default;