
        
            def show_message
      UI.message('Sending anonymous analytics information')
      UI.message('Learn more at https://docs.fastlane.tools/#metrics')
      UI.message('No personal or sensitive data is sent.')
      UI.message('You can disable this by adding `opt_out_usage` at the top of your Fastfile')
    end
    
            expect(result).to \
          eq('carthage bootstrap TestDependency1 TestDependency2')
      end
    
          it 'works with all params' do
        result = Fastlane::FastFile.new.parse('lane :test do
          create_keychain ({
            name: 'test.keychain',
            password: 'testpassword',
            default_keychain: true,
            unlock: true,
            timeout: 600,
            lock_when_sleeps: true,
            lock_after_timeout: true,
            add_to_search_list: false,
          })
        end').runner.execute(:test)
    
            it 'adds invalid path option' do
          path = './non/existent/path'
          expect do
            Fastlane::FastFile.new.parse('lane :test do
              swiftlint(
                path: '#{path}'
              )
            end').runner.execute(:test)
          end.to raise_error(/Couldn't find path '.*#{path}'/)
        end
      end
    
          it 'returns the return value of the block if present' do
        expect_command('ls', '-la')
        return_value = Fastlane::Actions.sh('ls', '-la') do |status, result|
          42
        end
        expect(return_value).to eq(42)
      end
    end
  end
    
          return value # fallback to not doing anything
    end
    
        # wrap in double quotes if contains space
    if str =~ /\s/
      # double quotes have to be doubled if will be quoted
      str.gsub!(''', '''')
      return ''' + str + '''
    else
      return str
    end
  end
  module_function :shellescape
end

    
            def index
          @product_properties = @product.product_properties.accessible_by(current_ability, :read).
                                ransack(params[:q]).result.
                                page(params[:page]).per(params[:per_page])
          respond_with(@product_properties)
        end
    
            def show
          @state = scope.find(params[:id])
          respond_with(@state)
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