
        
        html_readme = '<html>#{Kramdown::Document.new(open('README.md').read).to_html}</html>'
readme_doctree = REXML::Document.new(html_readme)
links = REXML::XPath.match(readme_doctree, '//a')
    
                  define_method method do |resource_or_scope, *args|
                scope = Devise::Mapping.find_scope!(resource_or_scope)
                router_name = Devise.mappings[scope].router_name
                context = router_name ? send(router_name) : _devise_route_context
                context.send('#{action}#{scope}_#{module_name}_#{path_or_url}', *args)
              end
            end
          end
        end
      end
    
        assert_raise(NoMethodError, bug5012) { t1.m }
  end
    
      it 'decodes the remaining doubles when passed the '*' modifier' do
    array = '@\x07333333?\xf6ffffff@\x20ffffff'.unpack(unpack_format('*'))
    array.should == [2.9, 1.4, 8.2]
  end
    
      it 'adds nil for each element requested beyond the end of the String' do
    [ ['',     [nil, nil, nil]],
      ['bac',  [25185, nil, nil]],
      ['badc', [25185, 25699, nil]]
    ].should be_computed_by(:unpack, unpack_format(3))
  end
    
    describe :string_unpack_Aa, shared: true do
  it 'decodes the number of bytes specified by the count modifier including NULL bytes' do
    'a\x00bc'.unpack(unpack_format(3)+unpack_format).should == ['a\x00b', 'c']
  end
    
    require 'rubygems'
require 'rjb'
    
    	def parse_line(line)
		if line =~ /\w+ <[\.\w]+>:/
			# End a previous block
			unless block_size == 0
				block_end
			end
			block_begin(line)
    
    require 'stringex'
    
          rtn = ''
      (context.environments.first['site'][@array_name] || []).each do |file|
        if file !~ /^[a-zA-Z0-9_\/\.-]+$/ || file =~ /\.\// || file =~ /\/\./
          rtn = rtn + 'Include file '#{file}' contains invalid characters or sequences'
        end
    
      class VideoTag < Liquid::Tag
    @video = nil
    @poster = ''
    @height = ''
    @width = ''
    
            def create
          authorize! :create, StockMovement
          @stock_movement = scope.new(stock_movement_params)
          if @stock_movement.save
            respond_with(@stock_movement, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_movement)
          end
        end
    
      def get_git_info
    git = OpenStruct.new
    git.author = %x{ git config --get user.name  }.strip rescue 'your_username'
    git.email  = %x{ git config --get user.email }.strip rescue 'your_username@example.com'
    git
  end
    
        module Declaration
      def deprecated_option(switches, type, description, opts = {})
        Option::Definition.new(switches, type, description, opts).tap do |option|
          declared_options << option
          block ||= option.default_conversion_block
          define_deprecated_accessors_for(option, opts, &block)
        end
      end
    end
    
            #target = $LOADED_FEATURES.grep(/#{path}/).first
        #puts path
        #puts caller.map { |c| '  #{c}' }.join('\n')
        #fontsize = [10, duration * 48].max
        puts '#{duration},#{path},#{source}'
      end
      #puts caller.map { |c| ' => #{c}' }.join('\n')
    end