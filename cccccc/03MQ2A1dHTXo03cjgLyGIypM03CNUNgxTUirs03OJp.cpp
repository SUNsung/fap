
        
            http://www.apache.org/licenses/LICENSE-2.0
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    struct Bfloat16EqFunctor {
  npy_bool operator()(bfloat16 a, bfloat16 b) { return a == b; }
};
struct Bfloat16NeFunctor {
  npy_bool operator()(bfloat16 a, bfloat16 b) { return a != b; }
};
struct Bfloat16LtFunctor {
  npy_bool operator()(bfloat16 a, bfloat16 b) { return a < b; }
};
struct Bfloat16GtFunctor {
  npy_bool operator()(bfloat16 a, bfloat16 b) { return a > b; }
};
struct Bfloat16LeFunctor {
  npy_bool operator()(bfloat16 a, bfloat16 b) { return a <= b; }
};
struct Bfloat16GeFunctor {
  npy_bool operator()(bfloat16 a, bfloat16 b) { return a >= b; }
};
    
    // Register the bfloat16 numpy type.
void RegisterNumpyBfloat16();
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_PYTHON_LIB_CORE_PY_EXCEPTION_REGISTRY_H_
#define TENSORFLOW_PYTHON_LIB_CORE_PY_EXCEPTION_REGISTRY_H_
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#include 'tensorflow/python/util/kernel_registry.h'
    
    // Returns the kernel class name required to execute <node_def> on the device
// type of <node_def.device>, or an empty string if the kernel class is not
// found or the device name is invalid.
string TryFindKernelClass(const string& serialized_node_def);
    
    
    {
    {}  // namespace cuda
}  // namespace stream_executor
    
      // Logs information about the kernel driver version and userspace driver
  // library version.
  static void LogDriverVersionInformation();
    
    #include 'tensorflow/stream_executor/cuda/cuda_gpu_executor.h'
#include 'tensorflow/stream_executor/cuda/cuda_stream.h'
#include 'tensorflow/stream_executor/lib/statusor.h'
    
    
    {    return;
  }
    
      /// Retrieve the array of protocol conformances, which line up with the
  /// requirements of the generic signature.
  ArrayRef<ProtocolConformanceRef> getConformances() const {
    return llvm::makeArrayRef(getTrailingObjects<ProtocolConformanceRef>(),
                              numConformanceRequirements);
  }
  MutableArrayRef<ProtocolConformanceRef> getConformances() {
    return MutableArrayRef<ProtocolConformanceRef>(
                              getTrailingObjects<ProtocolConformanceRef>(),
                              numConformanceRequirements);
  }
    
    #endif // finish default implementation

    
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
    
        // Strip generic arguments from that child, then return it.
    return stripGenericArgsFromContextNode(node->getChild(0)->getChild(0),
                                          factory);
    
    #if PY_MAJOR_VERSION >= 3
static struct PyModuleDef _module = {
  PyModuleDef_HEAD_INIT,
  kModuleName,
  kModuleDocstring,
  -1,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};
#define INITFUNC PyInit__api_implementation
#define INITFUNC_ERRORVAL NULL
#else
#define INITFUNC init_api_implementation
#define INITFUNC_ERRORVAL
#endif
    
    io::ZeroCopyOutputStream*
GeneratorContext::OpenForAppend(const string& filename) {
  return NULL;
}
    
      // TODO(jonskeet): Consider a C#-escaping format here instead of just Base64.
  std::string base64 = FileDescriptorToBase64(file_);
  while (base64.size() > 60) {
    printer->Print('\'$base64$\',\n', 'base64', base64.substr(0, 60));
    base64 = base64.substr(60);
  }
  printer->Print('\'$base64$\'));\n', 'base64', base64);
  printer->Outdent();
  printer->Outdent();
  printer->Outdent();
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
    
    const FieldDescriptor* ValueField(const FieldDescriptor* descriptor) {
  GOOGLE_CHECK_EQ(FieldDescriptor::TYPE_MESSAGE, descriptor->type());
  const Descriptor* message = descriptor->message_type();
  GOOGLE_CHECK(message->options().map_entry());
  return message->FindFieldByName('value');
}
    
    FileGenerator::~FileGenerator() {
  STLDeleteContainerPointers(enum_generators_.begin(), enum_generators_.end());
  STLDeleteContainerPointers(message_generators_.begin(),
                             message_generators_.end());
  STLDeleteContainerPointers(extension_generators_.begin(),
                             extension_generators_.end());
}
    
    
    {  string comments;
  SourceLocation location;
  if (descriptor_->GetSourceLocation(&location)) {
    comments = BuildCommentsString(location, true);
  } else {
    comments = '';
  }
  variables_['comments'] = comments;
}
    
    // Protocol Buffers - Google's data interchange format
// Copyright 2008 Google Inc.  All rights reserved.
// https://developers.google.com/protocol-buffers/
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// 'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
    
    grpc_error* CensusClientCallData::Init(grpc_call_element* elem,
                                       const grpc_call_element_args* args) {
  path_ = grpc_slice_ref_internal(args->path);
  start_time_ = absl::Now();
  method_ = GetMethod(&path_);
  qualified_method_ = absl::StrCat('Sent.', method_);
  GRPC_CLOSURE_INIT(&on_done_recv_message_, OnDoneRecvMessageCb, elem,
                    grpc_schedule_on_exec_ctx);
  GRPC_CLOSURE_INIT(&on_done_recv_trailing_metadata_,
                    OnDoneRecvTrailingMetadataCb, elem,
                    grpc_schedule_on_exec_ctx);
  return GRPC_ERROR_NONE;
}
    
    // A CallData class will be created for every grpc call within a channel. It is
// used to store data and methods specific to that call. CensusClientCallData is
// thread-compatible, however typically only 1 thread should be interacting with
// a call at a time.
class CensusClientCallData : public CallData {
 public:
  // Maximum size of trace context is sent on the wire.
  static constexpr uint32_t kMaxTraceContextLen = 64;
  // Maximum size of tags that are sent on the wire.
  static constexpr uint32_t kMaxTagsLen = 2048;
    }
    
    // A CallData class will be created for every grpc call within a channel. It is
// used to store data and methods specific to that call. CensusServerCallData is
// thread-compatible, however typically only 1 thread should be interacting with
// a call at a time.
class CensusServerCallData : public CallData {
 public:
  // Maximum size of server stats that are sent on the wire.
  static constexpr uint32_t kMaxServerStatsLen = 16;
    }
    
    #endif  // GRPC_SRC_CPP_SERVER_LOAD_REPORTER_GET_CPU_STATS_H

    
     protected:
  /**
   * \struct  PredictionCacheEntry
   *
   * \brief Contains pointer to input matrix and associated cached predictions.
   */
  struct PredictionCacheEntry {
    std::shared_ptr<DMatrix> data;
    HostDeviceVector<bst_float> predictions;
  };
    
    /*!
 * \brief Macro to register tree updater.
 *
 * \code
 * // example of registering a objective ndcg@k
 * XGBOOST_REGISTER_TREE_UPDATER(ColMaker, 'colmaker')
 * .describe('Column based tree maker.')
 * .set_body([]() {
 *     return new ColMaker<TStats>();
 *   });
 * \endcode
 */
#define XGBOOST_REGISTER_TREE_UPDATER(UniqueId, Name)                   \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::TreeUpdaterReg&               \
  __make_ ## TreeUpdaterReg ## _ ## UniqueId ## __ =                    \
      ::dmlc::Registry< ::xgboost::TreeUpdaterReg>::Get()->__REGISTER__(Name)
    
    
    { private:
  /*! \brief the underlying stream */
  dmlc::Stream *stream_;
  /*! \brief buffer to hold data */
  std::string buffer_;
  /*! \brief length of valid data in buffer */
  size_t read_len_;
  /*! \brief pointer in the buffer */
  size_t read_ptr_;
};
    
    
    {
    {void SparsePageWriter::Alloc(std::shared_ptr<SparsePage>* out_page) {
  CHECK(*out_page == nullptr);
  if (num_free_buffer_ != 0) {
    out_page->reset(new SparsePage());
    --num_free_buffer_;
  } else {
    CHECK(qrecycle_.Pop(out_page));
  }
}
}  // namespace data
}  // namespace xgboost
    
      // Compute the weight for a node with the given stats
  virtual bst_float ComputeWeight(bst_uint parentid, const GradStats& stats)
      const = 0;
    
    class CompressedIterator {
 public:
  // Type definitions for thrust
  typedef CompressedIterator<T> self_type;  // NOLINT
  typedef ptrdiff_t difference_type;        // NOLINT
  typedef T value_type;                     // NOLINT
  typedef value_type *pointer;              // NOLINT
  typedef value_type reference;             // NOLINT
    }
    
    class MockProtocolData : public ProtocolData<::apollo::canbus::ChassisDetail> {
 public:
  static const int32_t ID = 0x111;
  MockProtocolData() {}
};
    
    TEST(ProtocolDataTest, CheckSum) {
  const uint8_t INPUT[] = {0x00, 0x12, 0x00, 0x13, 0x00, 0xF3, 0x00, 0x00};
  const uint8_t result =
      ProtocolData<apollo::canbus::ChassisDetail>::CalculateCheckSum(INPUT, 8);
  EXPECT_EQ(0xE7, result);
}
    
    TEST(ByteTest, SetGetHighLowBit) {
  unsigned char byte_value = 0x37;
  Byte value(&byte_value);
  value.set_value_high_4_bits(0x0B);
  EXPECT_EQ(0x0B, value.get_byte_high_4_bits());
  EXPECT_EQ(0x07, value.get_byte_low_4_bits());
  value.set_value_low_4_bits(0x0B);
  EXPECT_EQ(0x0B, value.get_byte_high_4_bits());
  EXPECT_EQ(0x0B, value.get_byte_low_4_bits());
}
    
      x <<= 3;
  x |= t;
    
    
    {  int ret = x;
  return ret;
}