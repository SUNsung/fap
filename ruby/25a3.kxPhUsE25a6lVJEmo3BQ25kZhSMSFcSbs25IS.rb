
        
              def self.[](type)
        type_klass[type]
      end
    
      def name
    'hash backed author'
  end
end
    
      def test_feed_should_allow_overriding_ids
    with_restful_routing(:scrolls) do
      get :index, params: { id: 'feed_with_overridden_ids' }
      assert_select 'id', text: 'tag:test.rubyonrails.org,2008:test/'
      assert_select 'entry id', text: 'tag:test.rubyonrails.org,2008:1'
      assert_select 'entry id', text: 'tag:test.rubyonrails.org,2008:2'
    end
  end
    
            if b_length > a_length
          (b_length - a_length).times { a_split.insert(-2, 0) }
        elsif a_length > b_length
          (a_length - b_length).times { b_split.insert(-2, 0) }
        end
    
        def fragment_url_string?(str)
      str[0] == '#'
    end
    
    module Docs
  class PageDb
    attr_reader :pages
    
        def html?
      mime_type.include? 'html'
    end
    
            self.base_url.scheme = effective_base_url.scheme
        self.base_url.host = effective_base_url.host
        self.base_url.path = effective_base_url.path
        super
      ensure
        self.base_url.scheme = original_scheme
        self.base_url.host = original_host
        self.base_url.path = original_path
      end
    end
    
        private
    
            css('h1 + code').each do |node|
          node.before('<p></p>')
          while node.next_element.name == 'code'
            node.previous_element << ' '
            node.previous_element << node.next_element
          end
          node.previous_element.prepend_child(node)
        end
    
            css('a[id]:empty').each do |node|
          node.next_element['id'] = node['id'] if node.next_element
        end
    
            css('.nav-index-section').each do |node|
          node.content = node.content
        end
    
        def extract_to_dir(unpack_dir, basename:, verbose:)
      system_command! AIR_APPLICATION_INSTALLER,
                      args:    ['-silent', '-location', unpack_dir, path],
                      verbose: verbose
    end
  end
end

    
      def up_down(change)
    change.up do
      Mention.update_all(mentions_container_type: 'Post')
      change_column :mentions, :mentions_container_type, :string, null: false
      Notification.where(type: 'Notifications::Mentioned').update_all(type: 'Notifications::MentionedInPost')
    end
    
      class PostToService < Base
    def perform(*_args)
      # don't post to services in cucumber
    end
  end
    
      describe '#new' do
    before do
      sign_in alice, scope: :user
    end
    
          it 'it doesn't call toggle_hidden_shareable' do
        expect(@controller.current_user).not_to receive(:toggle_hidden_shareable).with(an_instance_of(StatusMessage))
        begin
          put :update, params: {id: 42, post_id: @status.id}, format: :js
        rescue ActiveRecord::RecordNotFound
        end
      end
    end
  end
end

    
          # Checks whether this node body is a void context.
      #
      # @return [Boolean] whether the `def` node body is a void context
      def void_context?
        method?(:initialize) || assignment_method?
      end
    
          # Returns the delta between this element's value and the argument's.
      #
      # @note Keyword splats always return a delta of 0
      #
      # @return [Integer] the delta between the two values
      def value_delta(other)
        HashElementDelta.new(self, other).value_delta
      end
    
      puts '\n== Removing old logs and tempfiles =='
  system! 'bin/rails log:clear tmp:clear'
    
        config.cache_store = :memory_store
    config.public_file_server.headers = {
      'Cache-Control' => 'public, max-age=#{2.days.to_i}'
    }
  else
    config.action_controller.perform_caching = false