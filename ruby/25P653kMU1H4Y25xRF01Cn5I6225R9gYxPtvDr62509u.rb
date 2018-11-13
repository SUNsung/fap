
        
              it 'allows you to specify your own tag' do
        tag = '2.0.0'
    
            inner_command = 'git describe --tags `git rev-list --tags --max-count=1`'
        pseudocommand = 'git log --pretty=\'%B\' #{inner_command.shellescape}...HEAD'
        expect(result).to eq(pseudocommand)
      end
    
          context 'as string with wildcards' do
        it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add *.txt', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: '*.txt', shell_escape: false)
          end').runner.execute(:test)
        end
      end
    
          it 'generates the correct git command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          git_commit(path: './fastlane/README.md', message: 'message')
        end').runner.execute(:test)
    
          it 'allows a single array to be passed to support older Fastlane syntax' do
        expect_command('ls -la /tmp')
        Fastlane::Actions.sh(['ls -la', '/tmp'])
      end
    end
    
              expect do
            config_item.valid?('ABC')
          end.to raise_error(FastlaneCore::Interface::FastlaneError, ''foo' value must be a Float! Found String instead.')
        end
    
          class MergeRequest < ActiveRecord::Base
        self.table_name = 'merge_requests'
    
          def get_token
        @api.token
      end
    
          def same
        @base && @head && @base.id == @head.id
      end
    
              resolution
        end
      end
    end
  end
end

    
                    line_obj_index += 1
              end
            end
    
            def submodules_by_name
          @result
        end
      end
    
        def replace_all(file, regex, replacement = nil, &block)
      log_transform regex, replacement
      new_file = file.gsub(regex, replacement, &block)
      raise 'replace_all #{regex}, #{replacement} NO MATCH' if file == new_file
      new_file
    end
    
        def log_processed(name)
      puts green '    #{name}'
    end
    
      # Enable Rack::Cache to put a simple HTTP cache in front of your application
  # Add `rack-cache` to your Gemfile before enabling this.
  # For large-scale production use, consider using a caching reverse proxy like nginx, varnish or squid.
  # config.action_dispatch.rack_cache = true
    
      describe '#referrer' do
    it 'Reads referrer from Referer header' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/valid'}
      expect(subject.referrer(env)).to eq('bar.com')
    end
    
      let(:unordered_config_parts) { ordered_config_parts.shuffle }
  let(:settings) { LogStash::SETTINGS }
    
              it 'successfully install the plugin when verification is disabled' do
            command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify logstash-filter-qatest')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-qatest')
          end
    
          it 'display a list of installed plugins' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --installed')
        expect(result.stdout.split('\n').size).to be > 1
      end
    
          # Calls the given block for each `when` node in the `case` statement.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_when
        return when_branches.to_enum(__method__) unless block_given?
    
            def find_address
          if @order.bill_address_id == params[:id].to_i
            @order.bill_address
          elsif @order.ship_address_id == params[:id].to_i
            @order.ship_address
          else
            raise CanCan::AccessDenied
          end
        end
      end
    end
  end
end

    
              @properties = @properties.page(params[:page]).per(params[:per_page])
          respond_with(@properties)
        end
    
            def update
          @stock_item = StockItem.accessible_by(current_ability, :update).find(params[:id])
    
            def update
          authorize! :update, stock_location
          if stock_location.update_attributes(stock_location_params)
            respond_with(stock_location, status: 200, default_template: :show)
          else
            invalid_resource!(stock_location)
          end
        end