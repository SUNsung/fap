
        
              lock_file
    end
    
              # Return the registry
          data[:command]
        end
    
              return [main_args, sub_command, sub_args]
        end
      end
    end
  end
end

    
      class SendPublic < Base
    def perform(*_args)
      # don't federate in cucumber
    end
  end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
        context 'on my own post' do
      it 'succeeds' do
        @target = alice.post :status_message, text: 'AWESOME', to: @alices_aspect.id
        post :create, params: like_hash, format: :json
        expect(response.code).to eq('201')
      end
    end
    
          it 'returns a 404 for a post not visible to the user' do
        sign_in(eve, scope: :user)
        expect {
          get :index, params: {post_id: @post.id}, format: :json
        }.to raise_error(ActiveRecord::RecordNotFound)
      end
    
            expect(new_source).to eq(['#{prefix}#{open}#{a},',
                                  '#{b}#{close}',
                                  suffix].join($RS))
      end
    end
  end
end

    
          # This is used for duck typing with `pair` nodes which also appear as
      # `hash` elements.
      #
      # @return [false]
      def hash_rocket?
        false
      end