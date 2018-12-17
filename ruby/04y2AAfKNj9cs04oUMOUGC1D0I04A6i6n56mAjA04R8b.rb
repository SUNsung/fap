
        
            gu = GroupUser.find_by(user_id: moderator.id, group_id: group.id)
    expect(gu.notification_level).to eq(NotificationLevels.all[:watching])
    
      smoke_user = User.seed do |u|
    u.id = 0
    u.name = 'smoke_user'
    u.username = 'smoke_user'
    u.username_lower = 'smoke_user'
    u.password = 'P4ssw0rd'
    u.active = true
    u.approved = true
    u.approved_at = Time.now
    u.trust_level = TrustLevel[3]
  end.first
    
        Category.transaction do
      lounge.group_names = ['trust_level_3']
      unless lounge.save
        puts lounge.errors.full_messages
        raise 'Failed to set permissions on trust level 3 lounge category!'
      end
    
            staff.topic_id = post.topic.id
        unless staff.save
          puts staff.errors.full_messages
          puts 'Failed to set the Staff category description topic!'
        end
    
            def collection_method
          :issues
        end
    
            def collection_method
          :lfs_objects
        end
    
    module Gitlab
  module GithubImport
    module Importer
      class NotesImporter
        include ParallelScheduling
    
          def cache_key_iid
        if object.respond_to?(:noteable_id)
          object.noteable_id
        elsif object.respond_to?(:iid)
          object.iid
        else
          raise(
            TypeError,
            'Instances of #{object.class} are not supported'
          )
        end
      end
    end
  end
end

    
            # attributes - A Hash containing the raw note details. The keys of this
        #              Hash must be Symbols.
        def initialize(attributes)
          @attributes = attributes
        end
    
            # attributes - A Hash containing the raw lfs_object details. The keys of this
        #              Hash must be Symbols.
        def initialize(attributes)
          @attributes = attributes
        end
      end
    end
  end
end

    
            NOTEABLE_TYPE_REGEX = %r{/(?<type>(pull|issues))/(?<iid>\d+)}i
    
            # Builds a user from a GitHub API response.
        #
        # user - An instance of `Sawyer::Resource` containing the user details.
        def self.from_api_response(user)
          new(id: user.id, login: user.login)
        end
    
        def subpath_to(url)
      base_url.subpath_to url, ignore_case: true
    end
    
        def type=(value)
      @type = value.try :strip
    end
    
          def process_response(response)
        super.merge! response_effective_path: response.effective_path, response_path: response.path
      end
    
            css('h1:not(:first-child)').each do |node|
          node.name = 'h2'
        end unless at_css('h2')
    
          def get_type
        if slug.start_with?('guide/')
          'Guide'
        elsif slug.start_with?('cookbook/')
          'Cookbook'
        elsif slug == 'glossary'
          'Guide'
        else
          type = at_css('.nav-title.is-selected').content.strip
          type.remove! ' Reference'
          type << ': #{mod}' if mod
          type
        end
      end
    
            # Remove ng-* attributes
        css('*').each do |node|
          node.attributes.each_key do |attribute|
            node.remove_attribute(attribute) if attribute.start_with? 'ng-'
          end
        end
    
        def destroy
      authorize @custom_emoji, :destroy?
      @custom_emoji.destroy!
      log_action :destroy, @custom_emoji
      flash[:notice] = I18n.t('admin.custom_emojis.destroyed_msg')
      redirect_to admin_custom_emojis_path(page: params[:page], **@filter_params)
    end
    
      private
    
    ENV['GEM_HOME'] = ENV['GEM_PATH'] = LogStash::Environment.logstash_gem_home
Gem.use_paths(LogStash::Environment.logstash_gem_home)
    
            if specs.size > 0
          specs
        else
          raise LogStash::PluginManager::PluginNotFoundError, 'Cannot find plugins matching: `#{plugin_pattern}`'
        end
      end.flatten
    end
    
        puts('Generated at #{target_file}')
  end
    
        context 'when is not a system pipeline' do
      it 'returns false if the pipeline is not a system pipeline' do
        expect(subject.system?).to be_falsey
      end
    end
  end
end

    
          @left_diff_line_number = nil
    
          def has_sidebar
        if @sidebar
          @sidebar.formatted_data.strip.empty? ? false : true
        else
          @sidebar = (@page.sidebar || false)
          !!@sidebar
        end
      end
    
      test 'clean path with leading slash' do
    assert_equal '/Mordor', clean_path('/Mordor')
  end
    
      test 'remove page extentions' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'page', view.remove_page_extentions('page.wiki')
    assert_equal 'page-wiki', view.remove_page_extentions('page-wiki.md')
    assert_equal 'file.any_extention', view.remove_page_extentions('file.any_extention')
  end
    
    require 'optparse'
require 'rubygems'
require 'gollum'
require 'cgi'
    
      def perform(msg='lulz you forgot a msg!')
    $redis.lpush('sinkiq-example-messages', msg)
  end
end
    
          def create_test_file
        if defined?(RSpec)
          create_worker_spec
        else
          create_worker_test
        end
      end
    
    
    # By leaving this as a class method, it can be pluggable and used by the Manager actor. Making it
    # an instance method will make it async to the Fetcher actor
    def self.bulk_requeue(inprogress, options)
      return if inprogress.empty?
    
      # Default to fake testing to keep old behavior
  Sidekiq::Testing.fake!