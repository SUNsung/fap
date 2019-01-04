
        
              # Converts the array to a comma-separated sentence where the last element is
      # joined by the connector word. This is the html_safe-aware version of
      # ActiveSupport's {Array#to_sentence}[http://api.rubyonrails.org/classes/Array.html#method-i-to_sentence].
      #
      def to_sentence(array, options = {})
        options.assert_valid_keys(:words_connector, :two_words_connector, :last_word_connector, :locale)
    
                # Prepend a hidden field to make sure something will be sent back to the
            # server if all radio buttons are unchecked.
            if options.fetch('include_hidden', true)
              hidden_field + rendered_collection
            else
              rendered_collection
            end
          end
    
              if name_and_id['for']
            name_and_id['id'] = name_and_id['for']
          else
            name_and_id.delete('id')
          end
    
        def initialize(lookup_context)
      @lookup_context = lookup_context
    end
    
            def self.status_sql
          scope_relevant = latest.exclude_ignored
          scope_warnings = latest.failed_but_allowed
    
              Gitlab::Database.bulk_insert(LabelLink.table_name, rows)
        end
    
            def collection_method
          :lfs_objects
        end
    
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

    
    
    {            # These fields are not displayed for LegacyDiffNote notes, so it
            # doesn't really matter what we set them to.
            a_mode: '100644',
            b_mode: '100644',
            new_file: false
          }
        end
      end
    end
  end
end

    
            # Builds an issue from a GitHub API response.
        #
        # issue - An instance of `Sawyer::Resource` containing the issue
        #         details.
        def self.from_api_response(issue)
          user =
            if issue.user
              Representation::User.from_api_response(issue.user)
            end
    
            # Builds a user from a GitHub API response.
        #
        # user - An instance of `Sawyer::Resource` containing the user details.
        def self.from_api_response(user)
          new(id: user.id, login: user.login)
        end
    
        def initialize(*args)
      if args.empty?
        super(*Array.new(9))
      elsif args.length == 1 && args.first.is_a?(Hash)
        args.first.assert_valid_keys URI::Generic::COMPONENT
        super(*args.first.values_at(*URI::Generic::COMPONENT))
      else
        super
      end
    end
    
            css('img[src]').each do |node|
          node['src'] = node['src'].gsub(%r{angularjs\.org/([\d\.]+)/docs/partials/(\w+)/}, 'angularjs.org/\1/docs/\2/')
        end
    
      def up_down(change)
    change.up do
      Mention.update_all(mentions_container_type: 'Post')
      change_column :mentions, :mentions_container_type, :string, null: false
      Notification.where(type: 'Notifications::Mentioned').update_all(type: 'Notifications::MentionedInPost')
    end
    
    RSpec::Matchers.define :have_path_in do |expected|
  match do |actual|
    await_condition { expected.include? actual.current_path }
  end
    
      class FetchWebfinger < Base
    def perform(*_args)
      # don't do real discovery in cucumber
    end
  end
end

    
          get :index, params: {conversation_id: @conv1.id}
      save_fixture(html_for('body'), 'conversations_read')
    end
  end
    
    Then(/^the invalid (.+) release is ignored$/) do |filename|
  test = 'ls -g #{TestApp.releases_path} | grep #{filename}'
  _, _, status = vagrant_cli_command('ssh -c #{test.shellescape}')
  expect(status).to be_success
end
    
          sshkit.use_format(*format_args)
    end
  end
end

    
          ServerKey = Struct.new(:hostname, :port)
    
          # Keys that have been set, but which have never been fetched.
      def unused_keys
        keys - fetched_keys
      end
    
    # define charCodeAt on String
class String
  def charCodeAt(k)
    # use scan, nil check, and unpack instead of ord for 1.8
    # 1.9 can simply use self[k].ord
    # http://stackoverflow.com/questions/7793177/split-utf8-string-regardless-of-ruby-version
    c = self.scan(/./mu)[k]
    return nil if c.nil?
    c.unpack('U')[0]
  end
end
    
          def previous_link
        label = '&laquo; Previous'
        if @page_num == 1
          %(<span class='disabled'>#{label}</span>)
        else
          link = url('/history/#{@page.name}?page=#{@page_num-1}')
          %(<a href='#{link}' hotkey='h'>#{label}</a>)
        end
      end
    
          def has_sidebar
        if @sidebar
          @sidebar.formatted_data.strip.empty? ? false : true
        else
          @sidebar = (@page.sidebar || false)
          !!@sidebar
        end
      end
    
    # Make sure we're in the test dir, the tests expect that to be the current
# directory.
TEST_DIR  = File.join(File.dirname(__FILE__), *%w[.])
    
        assert_match /Edit/, last_response.body, ''Edit' link is blocked in history template'