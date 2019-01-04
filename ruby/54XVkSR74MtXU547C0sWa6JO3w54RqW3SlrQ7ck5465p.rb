
        
          UserOption.where(user_id: smoke_user.id).update_all(
    email_direct: false,
    email_digests: false,
    email_private_messages: false,
  )
    
          class MergeRequest < ActiveRecord::Base
        self.table_name = 'merge_requests'
    
            # issue - An instance of `Gitlab::GithubImport::Representation::Issue`
        # project - An instance of `Project`
        # client - An instance of `Gitlab::GithubImport::Client`
        def initialize(issue, project, client)
          @issue = issue
          @project = project
          @client = client
          @label_finder = LabelFinder.new(project)
        end
    
          # Returns the identifier to use for cache keys.
      #
      # For issues and pull requests this will be 'Issue' or 'MergeRequest'
      # respectively. For diff notes this will return 'MergeRequest', for
      # regular notes it will either return 'Issue' or 'MergeRequest' depending
      # on what type of object the note belongs to.
      def cache_key_type
        if object.respond_to?(:issuable_type)
          object.issuable_type
        elsif object.respond_to?(:noteable_type)
          object.noteable_type
        else
          raise(
            TypeError,
            'Instances of #{object.class} are not supported'
          )
        end
      end
    
            expose_attribute :oid, :download_link
    
              new(hash)
        end
    
          private