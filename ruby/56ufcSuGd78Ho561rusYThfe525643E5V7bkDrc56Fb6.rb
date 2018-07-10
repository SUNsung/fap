
        
              topic.feature_topic_users(args)
    end
    
      def grant_admin!
    set_permission('admin', true)
  end
    
          key = Spaceship::Portal::Key.create(name: 'New Key', apns: true, device_check: true, music_id: 'some-music-id')
      expect(key).to be_instance_of(Spaceship::Portal::Key)
      expect(key.id).to eq('a-new-key-id')
    end
  end
    
        options[:attribution] = <<-HTML
      &copy; 2009&ndash;2018 Jeremy Ashkenas<br>
      Licensed under the MIT License.
    HTML
    
        alias_method :blank?, :empty?
    
    module RuboCop
  module Cop
    module Lint
      # In math and Python, we can use `x < y < z` style comparison to compare
      # multiple value. However, we can't use the comparison in Ruby. However,
      # the comparison is not syntax error. This cop checks the bad usage of
      # comparison operators.
      #
      # @example
      #
      #   # bad
      #
      #   x < y < z
      #   10 <= x <= 20
      #
      # @example
      #
      #   # good
      #
      #   x < y && y < z
      #   10 <= x && x <= 20
      class MultipleCompare < Cop
        MSG = 'Use the `&&` operator to compare multiple values.'.freeze
    
            def_node_matcher :on_body_of_reduce, <<-PATTERN
          (block (send _recv {:reduce :inject} !sym) _blockargs $(begin ...))
        PATTERN