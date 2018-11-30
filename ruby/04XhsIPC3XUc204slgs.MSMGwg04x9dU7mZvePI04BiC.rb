
        
              GivenDailyLike.decrement_for(user.id)
      expect(value_for(user.id, dt)).to eq(1)
      expect(limit_reached_for(user.id, dt)).to eq(false)
    
    describe Notification do
  before do
    NotificationEmailer.enable
  end
    
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
    
            if unmasked_token?(token)
          compare_with_real_token token, session
    
          def accepts?(env)
        cookie_header = env['HTTP_COOKIE']
        cookies = Rack::Utils.parse_query(cookie_header, ';,') { |s| s }
        cookies.each do |k, v|
          if k == session_key && Array(v).size > 1
            bad_cookies << k
          elsif k != session_key && Rack::Utils.unescape(k) == session_key
            bad_cookies << k
          end
        end
        bad_cookies.empty?
      end
    
          # Checks whether the `if` is an `elsif`. Parser handles these by nesting
      # `if` nodes in the `else` branch.
      #
      # @return [Boolean] whether the node is an `elsif`
      def elsif?
        keyword == 'elsif'
      end
    
          # Custom destructuring method. This is used to normalize the branches
      # for `pair` and `kwsplat` nodes, to add duck typing to `hash` elements.
      #
      # @return [Array<KeywordSplatNode>] the different parts of the `kwsplat`
      def node_parts
        [self, self]
      end
    end
  end
end

    
          # Checks whether this `hash` element is on the same line as `other`.
      #
      # @note A multiline element is considered to be on the same line if it
      #       shares any of its lines with `other`
      #
      # @return [Boolean] whether this element is on the same line as `other`
      def same_line?(other)
        loc.last_line == other.loc.line || loc.line == other.loc.last_line
      end