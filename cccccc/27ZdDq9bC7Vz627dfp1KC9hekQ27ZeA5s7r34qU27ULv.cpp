
        
          // Group fields
  RunValidTextFormatTestProto2('GroupFieldNoColon', REQUIRED,
                               'Data { group_int32: 1 }');
  RunValidTextFormatTestProto2('GroupFieldWithColon', REQUIRED,
                               'Data: { group_int32: 1 }');
  RunValidTextFormatTestProto2('GroupFieldEmpty', REQUIRED,
                               'Data {}');
    
    #include <google/protobuf/pyext/message.h>
    
    // This struct is used directly for ScalarMap, and is the base class of
// MessageMapContainer, which is used for MessageMap.
struct MapContainer : public ContainerBase {
  // Use to get a mutable message when necessary.
  Message* GetMutableMessage();
    }
    
    
    {  // For container containing messages, return a Python object for the given
  // pointer to a message.
  CMessage* BuildSubMessageFromPointer(const FieldDescriptor* field_descriptor,
                                       Message* sub_message,
                                       CMessageClass* message_class);
  CMessage* MaybeReleaseSubMessage(Message* sub_message);
} CMessage;
    
    int AssignSubscript(RepeatedCompositeContainer* self,
                    PyObject* slice,
                    PyObject* value) {
  if (value != NULL) {
    PyErr_SetString(PyExc_TypeError, 'does not support assignment');
    return -1;
  }
    }
    
    #include <memory>
#include <string>
#include <vector>
    
    bool GetAnyFieldDescriptors(const Message& message,
                            const FieldDescriptor** type_url_field,
                            const FieldDescriptor** value_field) {
  const Descriptor* descriptor = message.GetDescriptor();
  if (descriptor->full_name() != kAnyFullTypeName) {
    return false;
  }
  *type_url_field = descriptor->FindFieldByNumber(1);
  *value_field = descriptor->FindFieldByNumber(2);
  return (*type_url_field != NULL &&
          (*type_url_field)->type() == FieldDescriptor::TYPE_STRING &&
          *value_field != NULL &&
          (*value_field)->type() == FieldDescriptor::TYPE_BYTES);
}
    
      // Destructor deletes all owned heap allocated objects, and destructs objects
  // that have non-trivial destructors, except for proto2 message objects whose
  // destructors can be skipped. Also, frees all blocks except the initial block
  // if it was passed in.
  ~ArenaImpl();
    
      // Generate header code defining the enum.  This code should be placed
  // within the enum's package namespace, but NOT within any class, even for
  // nested enums.
  void GenerateDefinition(io::Printer* printer);
    
    void second(void) {
  printf('second\n');
  emscripten_sleep(1);
  longjmp(buf, -1);
}
    
    //========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2005 Kristian Høgsberg <krh@redhat.com>
// Copyright (C) 2005 Jeff Muizelaar <jeff@infidigm.net>
// Copyright (C) 2005-2010 Albert Astals Cid <aacid@kde.org>
// Copyright (C) 2006-2008 Pino Toscano <pino@kde.org>
// Copyright (C) 2006 Nickolay V. Shmyrev <nshmyrev@yandex.ru>
// Copyright (C) 2006 Scott Turner <scotty1024@mac.com>
// Copyright (C) 2006-2010 Carlos Garcia Campos <carlosgc@gnome.org>
// Copyright (C) 2007 Julien Rebetez <julienr@svn.gnome.org>
// Copyright (C) 2008 Iñigo Martínez <inigomartinez@gmail.com>
// Copyright (C) 2008 Brad Hards <bradh@kde.org>
// Copyright (C) 2008 Ilya Gorenbein <igorenbein@finjan.com>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================
    
    
    {private:
  
  PageTransitionType type;           // transition style
  int duration;                      // duration of the effect in seconds
  PageTransitionAlignment alignment; // dimension of the effect
  PageTransitionDirection direction; // direction of motion
  int angle;                         // direction in degrees
  double scale;                      // scale
  GBool rectangular;                 // is the area to be flown in rectangular?
  GBool ok;                          // set if created successfully
};
    
    #include 'Object.h'
    
    #endif

    
    #include <dmlc/omp.h>
#include <xgboost/logging.h>
#include <algorithm>
#include '../common/math.h'
    
    #if defined(XGBOOST_USE_NCCL) && defined(__CUDACC__)
TEST(Metric, MGPU_RMSE) {
  {
    auto lparam = xgboost::CreateEmptyGenericParam(0, -1);
    xgboost::Metric * metric = xgboost::Metric::Create('rmse', &lparam);
    metric->Configure({});
    ASSERT_STREQ(metric->Name(), 'rmse');
    EXPECT_NEAR(GetMetricEval(metric, {0}, {0}), 0, 1e-10);
    EXPECT_NEAR(GetMetricEval(metric,
                              {0.1f, 0.9f, 0.1f, 0.9f},
                              {  0,   0,   1,   1}),
                0.6403f, 0.001f);
    delete metric;
  }
    }
    
      // test PredTransform
  xgboost::HostDeviceVector<xgboost::bst_float> io_preds = {0, 0.1f, 0.5f, 0.9f, 1};
  std::vector<xgboost::bst_float> out_preds = {1, 1.10f, 1.64f, 2.45f, 2.71f};
  obj->PredTransform(&io_preds);
  auto& preds = io_preds.HostVector();
  for (int i = 0; i < static_cast<int>(io_preds.Size()); ++i) {
    EXPECT_NEAR(preds[i], out_preds[i], 0.01f);
  }
    
    
    {    // Synchronizes the section where a new Timestamp is generated and when it is registered in the
    // storage engine.
    mutable stdx::mutex _newOpMutex;
};
    
    Status DistLockCatalogImpl::_unlock(OperationContext* opCtx, const FindAndModifyRequest& request) {
    auto const shardRegistry = Grid::get(opCtx)->shardRegistry();
    auto resultStatus = shardRegistry->getConfigShard()->runCommandWithFixedRetryAttempts(
        opCtx,
        ReadPreferenceSetting{ReadPreference::PrimaryOnly},
        _locksNS.db().toString(),
        request.toBSON({}),
        Shard::kDefaultConfigCommandTimeout,
        Shard::RetryPolicy::kIdempotent);
    }
    
        static const char* kStageType;
    
        // Complete the command by appending the other options to the aggregate command.
    if (auto collation = cmd.getCollation()) {
        aggregationBuilder.append(kCollationField, collation.get());
    }
    
    
    {    std::vector<BSONObj> expectedPipeline{BSON('$count'
                                               << 'count')};
    ASSERT(std::equal(expectedPipeline.begin(),
                      expectedPipeline.end(),
                      ar.getPipeline().begin(),
                      ar.getPipeline().end(),
                      SimpleBSONObjComparator::kInstance.makeEqualTo()));
}
    
        /**
     * Used when there is a canonical query but no query solution (e.g. idhack queries, queries
     * against a NULL collection, queries using the subplan stage).
     */
    static StatusWith<std::unique_ptr<PlanExecutor, PlanExecutor::Deleter>> make(
        OperationContext* opCtx,
        std::unique_ptr<WorkingSet> ws,
        std::unique_ptr<PlanStage> rt,
        std::unique_ptr<CanonicalQuery> cq,
        const Collection* collection,
        YieldPolicy yieldPolicy);
    
    
    {    auto status = _kvEngine->dropIdent(opCtx, _rs->getIdent());
    fassert(
        51032,
        status.withContext(str::stream() << 'failed to drop temporary ident: ' << _rs->getIdent()));
    _recordStoreHasBeenDeleted = true;
}
    
    namespace {
    }
    
            {
            WriteUnitOfWork wunit(&_opCtx);
    }