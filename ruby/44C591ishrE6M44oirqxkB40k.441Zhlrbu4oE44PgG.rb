
        
        module Gitlab
  module Ci
    module Pipeline
      # Class for preloading data associated with pipelines such as commit
      # authors.
      class Preloader
        def self.preload!(pipelines)
          ##
          # This preloads all commits at once, because `Ci::Pipeline#commit` is
          # using a lazy batch loading, what results in only one batched Gitaly
          # call.
          #
          pipelines.each(&:commit)
    
          def releases(*args)
        each_object(:releases, *args)
      end
    
              Gitlab::Database.bulk_insert(LabelLink.table_name, rows)
        end
    
            def collection_method
          :issues_comments
        end