
        
        Badge.seed do |b|
  b.id = Badge::Anniversary
  b.name = 'Anniversary'
  b.default_icon = 'fa-clock-o'
  b.badge_type_id = BadgeType::Silver
  b.default_badge_grouping_id = BadgeGrouping::Community
  b.query = nil
  b.trigger = Badge::Trigger::None
  b.auto_revoke = false
  b.system = true
  b.multiple_grant = true
end
    
          if lounge.topic_id.nil?
        creator = PostCreator.new(Discourse.system_user,
          raw: I18n.t('vip_category_description'),
          title: I18n.t('category.topic_prefix', category: lounge.name),
          category: lounge.name,
          archetype: Archetype.default,
          skip_validations: true
        )
        post = creator.create
    
          def find_sessionless_user
        find_user_from_access_token || find_user_from_feed_token
      rescue Gitlab::Auth::AuthenticationError
        nil
      end
    
          def link_url
        raise NotImplementedError
      end
    end
  end
end

    
    Then (/^I should see the 'getting started' contents$/) do
  confirm_getting_started_contents
end

    
    require Rails.root.join('spec', 'helper_methods')
require Rails.root.join('spec', 'support', 'inlined_jobs')
require Rails.root.join('spec', 'support', 'user_methods')
include HelperMethods
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path #{expected.inspect} but it had'
  end
end
    
        it 'returns a 404 for a post not visible to the user' do
      sign_in eve
      expect {
        get :index, params: {post_id: @message.id}
      }.to raise_error(ActiveRecord::RecordNotFound)
    end
    
    module RuboCop
  module AST
    # A node extension for `for` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `for` nodes within RuboCop.
    class ForNode < Node
      # Returns the keyword of the `for` statement as a string.
      #
      # @return [String] the keyword of the `until` statement
      def keyword
        'for'
      end
    
    
    {      # Checks whether the `hash` literal is delimited by curly braces.
      #
      # @return [Boolean] whether the `hash` literal is enclosed in braces
      def braces?
        loc.end && loc.end.is?('}')
      end
    end
  end
end

    
          # A shorthand for getting the last argument of the node.
      # Equivalent to `arguments.last`.
      #
      # @return [Node, nil] the last argument of the node,
      #                     or `nil` if there are no arguments
      def last_argument
        arguments[-1]
      end
    
                return if after_update_attributes