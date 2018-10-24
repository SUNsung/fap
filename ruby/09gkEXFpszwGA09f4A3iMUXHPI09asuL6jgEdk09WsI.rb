
        
              update_disk_cleanup_size(path.disk_usage)
    end
    
        def compass?
      defined?(::Compass::Frameworks)
    end
    
        def pos
      byte_to_str_pos @s.pos
    end
    
      def up_down(change)
    change.up do
      Mention.update_all(mentions_container_type: 'Post')
      change_column :mentions, :mentions_container_type, :string, null: false
      Notification.where(type: 'Notifications::Mentioned').update_all(type: 'Notifications::MentionedInPost')
    end
    
      class SendPublic < Base
    def perform(*_args)
      # don't federate in cucumber
    end
  end
    
          it 'should not be catched when it is unexpected' do
        @target = alice.post :status_message, text: 'AWESOME', to: @alices_aspect.id
        allow(alice).to receive(:like!).and_raise('something')
        allow(@controller).to receive(:current_user).and_return(alice)
        expect { post :create, params: like_hash, format: :json }.to raise_error('something')
      end
    end
  end
    
          # The body of the method definition.
      #
      # @note this can be either a `begin` node, if the method body contains
      #       multiple expressions, or any other node, if it contains a single
      #       expression.
      #
      # @return [Node] the body of the method definition
      def body
        node_parts[0]
      end
    
            self
      end
    
    module RuboCop
  module AST
    # A node extension for `kwsplat` nodes. This will be used in place of a
    # plain  node when the builder constructs the AST, making its methods
    # available to all `kwsplat` nodes within RuboCop.
    class KeywordSplatNode < Node
      include HashElementNode
    
            private