
        
        Nullam luctus fermentum est id blandit. Phasellus consectetur ullamcorper
ligula, at finibus eros laoreet id. Etiam sit amet est in libero efficitur.
tristique. Ut nec magna augue. {{ author }} Quisque ut fringilla lacus
Aliquam vel ornare mauris. Suspendisse ornare diam tempor nulla facilisis
aliquet. Sed ultrices placerat ultricies.
LIQUID
    
          def print_worst_offenders
        @io.puts
        @io.puts 'Worst offenders:'
        @timings.sort_by { |_f, t| -t }.take(10).each do |(f, t)|
          @io.puts '  #{t}s for #{f}'
        end
        @io.puts
      end
    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
        describe '+' do
      context 'applies to numeric formats bBdiouxXaAeEfgG' do
        it 'adds a leading plus sign to non-negative numbers' do
          format('%+b', 10).should == '+1010'
          format('%+B', 10).should == '+1010'
          format('%+d', 112).should == '+112'
          format('%+i', 112).should == '+112'
          format('%+o', 87).should == '+127'
          format('%+u', 112).should == '+112'
          format('%+x', 196).should == '+c4'
          format('%+X', 196).should == '+C4'
    
      it 'accepts and uses a seed of 0' do
    srand(0)
    srand.should == 0
  end
    
      it 'returns true when passed ?f if the argument is a regular file' do
    Kernel.test(?f, @file).should == true
  end
    
        $Kernel_trace_var_global = 'foo'
    captured.should == 'foo'
  end
    
    abstract_target 'Abstract Target' do
    use_modular_headers!
    
    Then(/the current symlink points to the previous release/) do
  previous_release_path = @release_paths[-2]
    
          def has_role?(role)
        roles.include? role.to_sym
      end
    
          # rubocop:disable Security/MarshalLoad
      def add_role(role, hosts, options={})
        options_deepcopy = Marshal.dump(options.merge(roles: role))
        Array(hosts).each { |host| add_host(host, Marshal.load(options_deepcopy)) }
      end
      # rubocop:enable Security/MarshalLoad
    
          # Returns an array of source file location(s) where the given key was
      # assigned (i.e. where `set` was called). If the key was never assigned,
      # returns `nil`.
      def source_locations(key)
        locations[key]
      end
    
      table td.code       {width:750px}
  table td.code div   {width:750px;overflow:hidden}
</style>
</head>
<body>
  <div id='wrap'>
    <div id='header'>
      <img src='<%= env['SCRIPT_NAME'] %>/__sinatra__/500.png' alt='application error' height='161' width='313' />
      <div id='summary'>
        <h1><strong><%=h exception.class %></strong> at <strong><%=h path %>
          </strong></h1>
        <h2><%=h exception.message %></h2>
        <ul>
          <li class='first'><strong>file:</strong> <code>
            <%=h frames.first.filename.split('/').last %></code></li>
          <li><strong>location:</strong> <code><%=h frames.first.function %>
            </code></li>
          <li class='last'><strong>line:
            </strong> <%=h frames.first.lineno %></li>
        </ul>
      </div>
      <div class='clear'></div>
    </div>
    
      # piece file back together and write
  manifest = '  s.files = %w[\n#{files}\n  ]\n'
  spec = [head, manifest, tail].join('  # = MANIFEST =\n')
  File.open(gemspec_file, 'w') { |io| io.write(spec) }
  puts 'Updated #{gemspec_file}'
end
    
    if options[:irb]
  require 'irb'
  # http://jameskilton.com/2009/04/02/embedding-irb-into-your-ruby-application/
  module IRB # :nodoc:
    def self.start_session(binding)
      unless @__initialized
        args = ARGV
        ARGV.replace(ARGV.dup)
        IRB.setup(nil)
        ARGV.replace(args)
        @__initialized = true
      end
    
          # A shorthand for getting the last argument of the node.
      # Equivalent to `arguments.last`.
      #
      # @return [Node, nil] the last argument of the node,
      #                     or `nil` if there are no arguments
      def last_argument
        arguments[-1]
      end