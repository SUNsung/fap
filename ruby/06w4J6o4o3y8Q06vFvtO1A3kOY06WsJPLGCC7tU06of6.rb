
        
                    # Prepend a hidden field to make sure something will be sent back to the
            # server if all radio buttons are unchecked.
            if options.fetch('include_hidden', true)
              hidden_field + rendered_collection
            else
              rendered_collection
            end
          end
    
              def render_component(builder)
            builder.radio_button + builder.label
          end
      end
    end
  end
end

    
                  Time.utc(
                default[:year], default[:month], default[:day],
                default[:hour], default[:min], default[:sec]
              )
            end
          end
      end
    end
  end
end

    
              label_tag(name_and_id['id'], content, options)
        end
    
    module ActionView
  module Helpers
    module Tags # :nodoc:
      class TextField < Base # :nodoc:
        include Placeholderable
    
      def self.req_id(date, req_type, retries = 0)
    
      def self.period_types
    @types ||= Enum.new(all: 1,
                        yearly: 2,
                        monthly: 3,
                        weekly: 4,
                        daily: 5,
                        quarterly: 6)
  end
    
      describe '#<<' do
    it 'normalizes directive name' do
      builder << {
        script_src: ['symbol_underscore'],
        'script-src': ['symbol_dash'],
        'script_src' => ['string_underscore'],
        'script-src' => ['string_dash'],
      }
    
        def clear_theme_extensions_cache!
      cache.clear
    end
    
      # topic_reply_count is a count of posts in other users' topics
  def update_topic_reply_count
    self.topic_reply_count = Topic
      .joins('INNER JOIN posts ON topics.id = posts.topic_id AND topics.user_id <> posts.user_id')
      .where('posts.deleted_at IS NULL AND posts.user_id = ?', self.user_id)
      .distinct
      .count
  end
    
              if env[Auth::DefaultCurrentUserProvider::BAD_TOKEN]
            headers['Discourse-Logged-Out'] = '1'
          end
    
        if user_token.auth_token != token && user_token.prev_auth_token == token && user_token.auth_token_seen
      changed_rows = UserAuthToken
        .where('rotated_at < ?', 1.minute.ago)
        .where(id: user_token.id, prev_auth_token: token)
        .update_all(auth_token_seen: false)
    
        def current_url
      context[:url]
    end
    
        def name=(value)
      @name = value.try :strip
    end
    
            options.merge!(additional_options)
        options.freeze
      end
    end
    
            css('pre[language]').each do |node|
          node['data-language'] = node['language'].sub(/\Ats/, 'typescript').strip
          node['data-language'] = 'html' if node.content.start_with?('<')
          node.remove_attribute('language')
          node.remove_attribute('format')
        end
    
      included do
    before_action :set_session_activity
  end
    
    class RemoteUnfollowsController < ApplicationController
  layout 'modal'
    
    World(RemoteCommandHelpers)

    
    World(VagrantHelpers)

    
        def configure_scm
      Capistrano::Configuration::SCMResolver.new.resolve
    end
    
          def gets
        return unless $stdin.tty?
    
          def each
        servers_by_key.values.each { |server| yield server }
      end
    
    module Capistrano
  class Configuration
    # Decorates a Variables object to additionally perform an optional set of
    # user-supplied validation rules. Each rule for a given key is invoked
    # immediately whenever `set` is called with a value for that key.
    #
    # If `set` is called with a callable value or a block, validation is not
    # performed immediately. Instead, the validation rules are invoked the first
    # time `fetch` is used to access the value.
    #
    # A rule is simply a block that accepts two arguments: key and value. It is
    # up to the rule to raise an exception when it deems the value is invalid
    # (or just print a warning).
    #
    # Rules can be registered using the DSL like this:
    #
    #   validate(:my_key) do |key, value|
    #     # rule goes here
    #   end
    #
    class ValidatedVariables < SimpleDelegator
      include Capistrano::ProcHelpers