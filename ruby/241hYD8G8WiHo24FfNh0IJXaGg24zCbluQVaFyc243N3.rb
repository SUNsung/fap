
        
              obj.should_receive(:to_int).and_return(10)
      format('%b', obj).should == '1010'
    end
    
        trace_var :$Kernel_trace_var_global do |value|
      captured = value
    end
    
    namespace :bower do
    
      # Configure static asset server for tests with Cache-Control for performance.
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
  config.static_cache_control = 'public, max-age=3600'
    
    group :debugging do
  gem 'cocoapods_debug'
    
    Then(/^git wrapper permissions are 0700$/) do
  permissions_test = %Q([ $(stat -c '%a' #{TestApp.git_wrapper_path.shellescape}) == '700' ])
  _stdout, _stderr, status = vagrant_cli_command('ssh -c #{permissions_test.shellescape}')
    
          def call
        ask_question
        value_or_default
      end
    
          def left_diff_line_number(id, line)
        if line =~ /^@@/
          m, li                  = *line.match(/\-(\d+)/)
          @left_diff_line_number = li.to_i
          @current_line_number   = @left_diff_line_number
          ret                    = '...'
        elsif line[0] == ?-
          ret                    = @left_diff_line_number.to_s
          @left_diff_line_number += 1
          @current_line_number   = @left_diff_line_number - 1
        elsif line[0] == ?+
          ret = ' '
        else
          ret                    = @left_diff_line_number.to_s
          @left_diff_line_number += 1
          @current_line_number   = @left_diff_line_number - 1
        end
        ret
      end
    
          def title
        h1 = @h1_title ? page_header_from_content(@content) : false
        h1 || @page.url_path_title
      end
    
    desc 'Validate lib files and version file'
task :validate do
  libfiles = Dir['lib/*'] - ['lib/#{name}.rb', 'lib/#{name}']
  unless libfiles.empty?
    puts 'Directory `lib` should only contain a `#{name}.rb` file and `#{name}` dir.'
    exit!
  end
  unless Dir['VERSION*'].empty?
    puts 'A `VERSION` file at root level violates Gem best practices.'
    exit!
  end
end

    
          # Returns an array of all the when branches in the `case` statement.
      #
      # @return [Array<WhenNode>] an array of `when` nodes
      def when_branches
        node_parts[1...-1]
      end
    
          # Returns the collection the `for` loop is iterating over.
      #
      # @return [Node] The collection the `for` loop is iterating over
      def collection
        node_parts[1]
      end
    
            def scope
          if params[:country_id]
            @country = Country.accessible_by(current_ability, :read).find(params[:country_id])
            @country.states.accessible_by(current_ability, :read).order('name ASC')
          else
            State.accessible_by(current_ability, :read).order('name ASC')
          end
        end
      end
    end
  end
end

    
            def taxonomies
          @taxonomies = Taxonomy.accessible_by(current_ability, :read).order('name').includes(root: :children).
                        ransack(params[:q]).result.
                        page(params[:page]).per(params[:per_page])
        end
    
              @users = if params[:ids]
                     @users.ransack(id_in: params[:ids].split(','))
                   else
                     @users.ransack(params[:q])
                   end