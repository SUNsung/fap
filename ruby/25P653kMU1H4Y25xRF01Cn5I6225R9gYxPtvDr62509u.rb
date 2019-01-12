
        
                private
    
            result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            tag: '#{tag}',
            grouping: 'grouping',
            build_number: 'build_number',
            prefix: 'prefix',
          })
        end').runner.execute(:test)
    
              it 'raises an exception' do
            expect do
              Fastlane::FastFile.new.parse('lane :test do
                  carthage(command: '#{command}', frameworks: ['myframework', 'myframework2'])
                end').runner.execute(:test)
            end.to raise_error('Frameworks option is available only for 'archive' command.')
          end
        end
    
            expect(result[2]).to start_with('security set-keychain-settings')
        expect(result[2]).to include('-t 300')
        expect(result[2]).to_not(include('-l'))
        expect(result[2]).to_not(include('-u'))
        expect(result[2]).to include('~/Library/Keychains/test.keychain')
      end
    
    # Here be helper
    
      def page_requested?
    params[:page] == 'true'
  end
    
            def update
          @image = scope.images.accessible_by(current_ability, :update).find(params[:id])
          if @image.update_attributes(image_params)
            respond_with(@image, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end
    
            def show
          authorize! :admin, ReturnAuthorization
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :read).find(params[:id])
          respond_with(@return_authorization)
        end
    
            def create
          authorize! :create, StockMovement
          @stock_movement = scope.new(stock_movement_params)
          if @stock_movement.save
            respond_with(@stock_movement, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_movement)
          end
        end
    
            def create
          authorize! :create, Spree.user_class
          @user = Spree.user_class.new(user_params)
          if @user.save
            respond_with(@user, status: 201, default_template: :show)
          else
            invalid_resource!(@user)
          end
        end
    
            def zone
          @zone ||= Spree::Zone.accessible_by(current_ability, :read).find(params[:id])
        end
      end
    end
  end
end
