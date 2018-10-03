
        
        module BuildEnvironmentDSL
  def env(*settings)
    @env ||= BuildEnvironment.new
    @env.merge(settings)
  end
end
    
      # True if a {Formula} is being built with a specific option.
  # <pre>args << '--i-want-spam' if build.with? 'spam'
  #
  # args << '--qt-gui' if build.with? 'qt' # '--with-qt' ==> build.with? 'qt'
  #
  # # If a formula presents a user with a choice, but the choice must be fulfilled:
  # if build.with? 'example2'
  #   args << '--with-example2'
  # else
  #   args << '--with-example1'
  # end</pre>
  def with?(val)
    option_names = val.respond_to?(:option_names) ? val.option_names : [val]
    
      def zsh_completion_caveats
    if keg && keg.completion_installed?(:zsh) then <<-EOS.undent
      zsh completion has been installed to:
        #{HOMEBREW_PREFIX}/share/zsh/site-functions
      EOS
    end
  end
    
      def internal_development_commands
    find_internal_commands HOMEBREW_LIBRARY_PATH/'dev-cmd'
  end
    
      # Use this method to generate standard caveats.
  def standard_instructions(home_name, home_value = libexec)
    <<-EOS.undent
      Before you can use these tools you must export some variables to your $SHELL.
    
      describe '#style_colors' do
    it 'returns a css style-formated version of the scenario foreground and background colors' do
      expect(style_colors(scenario)).to eq('color:#AAAAAA;background-color:#000000')
    end
    
      it 'ignores invalid values' do
    location2 = Location.new(
      lat: 2,
      lng: 3,
      radius: -1,
      speed: -1,
      course: -1)
    expect(location2.radius).to be_nil
    expect(location2.speed).to be_nil
    expect(location2.course).to be_nil
  end
    
      it 'accepts a Float' do
    sleep(0.1).should be_close(0, 2)
  end
    
      it 'has no effect on immediate values' do
    [nil, true, false].each do |v|
      v.taint
      v.tainted?.should == false
    end
  end
    
        it 'returns true when passed ?w if the argument is readable by the effective uid' do
      Kernel.test(?w, @tmp_file).should be_true
    end
    
      it 'creates a public method in TOPLEVEL_BINDING' do
    eval @code, TOPLEVEL_BINDING
    Object.should have_method :boom
  end
    
              # Encodes the Rex::Proto::Kerberos::Model::Element into an ASN.1 String. This
          # method has been designed to be overridden by subclasses.
          #
          # @raise [NoMethodError]
          def encode
            raise ::NoMethodError, 'Method designed to be overridden'
          end
        end
      end
    end
  end
end
    
              # Decodes the nonce field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_nonce(input)
            input.value[0].value.to_i
          end
    
              # Encodes the value field
          #
          # @return [OpenSSL::ASN1::OctetString]
          def encode_value
            OpenSSL::ASN1::OctetString.new(value)
          end
        end
      end
    end
  end
end
    
    begin
  require 'ruby-prof'
    
            if e.is_a?(Sass::SyntaxError)
          $stderr.puts e.sass_backtrace_str('standard input')
        else
          $stderr.print '#{e.class}: ' unless e.class == RuntimeError
          $stderr.puts e.message.to_s
        end
        $stderr.puts '  Use --trace for backtrace.'
    
    team = ['Ryan Tomayko', 'Blake Mizerany', 'Simon Rozet', 'Konstantin Haase', 'Zachary Scott']
desc 'list of contributors'
task :thanks, ['release:all', :backports] do |t, a|
  a.with_defaults :release => '#{prev_version}..HEAD',
    :backports => '#{prev_feature}.0..#{prev_feature}.x'
  included = `git log --format=format:'%aN\t%s' #{a.release}`.lines.map { |l| l.force_encoding('binary') }
  excluded = `git log --format=format:'%aN\t%s' #{a.backports}`.lines.map { |l| l.force_encoding('binary') }
  commits  = (included - excluded).group_by { |c| c[/^[^\t]+/] }
  authors  = commits.keys.sort_by { |n| - commits[n].size } - team
  puts authors[0..-2].join(', ') << ' and ' << authors.last,
    '(based on commits included in #{a.release}, but not in #{a.backports})'
end
    
      // writing
  $('form').on('submit',function(e) {
    $.post('/', {msg: '<%= user %>: ' + $('#msg').val()});
    $('#msg').val(''); $('#msg').focus();
    e.preventDefault();
  });
</script>
    
    class Rack::Builder
  include Sinatra::Delegator
end

    
      <script type='text/javascript'>
  //<!--
  function toggle(id) {
    var pre  = document.getElementById('pre-' + id);
    var post = document.getElementById('post-' + id);
    var context = document.getElementById('context-' + id);
    }
    
    require 'stringex'