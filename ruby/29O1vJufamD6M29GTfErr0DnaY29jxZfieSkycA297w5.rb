
        
              # Iterates over all of the objects for the given method (e.g. `:labels`).
      #
      # method - The method to send to Octokit for querying data.
      # args - Any arguments to pass to the Octokit method.
      def each_object(method, *args, &block)
        return to_enum(__method__, method, *args) unless block_given?
    
    module Gitlab
  module GithubImport
    module Importer
      class DiffNotesImporter
        include ParallelScheduling
    
    module Gitlab
  module GithubImport
    module Importer
      class IssuesImporter
        include ParallelScheduling
    
            # issue - An instance of `Gitlab::GithubImport::Representation::Issue`
        # project - An instance of `Project`
        # client - An instance of `Gitlab::GithubImport::Client`
        def initialize(issue, project, client)
          @issue = issue
          @project = project
          @client = client
          @label_finder = LabelFinder.new(project)
        end
    
              lfs_objects.each do |object|
            yield object
          end
        rescue StandardError => e
          Rails.logger.error('The Lfs import process failed. #{e.message}')
        end
      end
    end
  end
end

    
            def importer_class
          NoteImporter
        end
    
          # The base cache key to use for tracking already imported objects.
      ALREADY_IMPORTED_CACHE_KEY =
        'github-importer/already-imported/%{project}/%{collection}'.freeze
    
            # Builds a user using a Hash that was built from a JSON payload.
        def self.from_json_hash(raw_hash)
          new(Representation.symbolize_hash(raw_hash))
        end
    
        def create
      authorize ReportNote, :create?
    
      def process_push_request
    case hub_mode
    when 'subscribe'
      Pubsubhubbub::SubscribeService.new.call(account_from_topic, hub_callback, hub_secret, hub_lease_seconds, verified_domain)
    when 'unsubscribe'
      Pubsubhubbub::UnsubscribeService.new.call(account_from_topic, hub_callback)
    else
      ['Unknown mode: #{hub_mode}', 422]
    end
  end
    
      def request_locale
    preferred_locale || compatible_locale
  end
    
      def user_needs_sign_in_update?
    user_signed_in? && (current_user.current_sign_in_at.nil? || current_user.current_sign_in_at < UPDATE_SIGN_IN_HOURS.hours.ago)
  end
end

    
          it 'returns an array of reshares for a post' do
        bob.reshare!(@post)
        get :index, params: {post_id: @post.id}, format: :json
        expect(JSON.parse(response.body).map {|h| h['id'] }).to eq(@post.reshares.map(&:id))
      end