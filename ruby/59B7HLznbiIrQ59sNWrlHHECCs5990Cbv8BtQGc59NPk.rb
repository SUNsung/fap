
        
            You can install it using Cask:
    
      def fixopt(f)
    path = if f.linked_keg.directory? && f.linked_keg.symlink?
      f.linked_keg.resolved_path
    elsif f.prefix.directory?
      f.prefix
    elsif (kids = f.rack.children).size == 1 && kids.first.directory?
      kids.first
    else
      raise
    end
    Keg.new(path).optlink
  rescue StandardError
    raise '#{f.opt_prefix} not present or broken\nPlease reinstall #{f.full_name}. Sorry :('
  end
end
    
      # True if a {Formula} is being built with {Formula.stable} instead of {Formula.devel} or {Formula.head}. This is the default.
  # <pre>args << '--some-beta' if build.devel?</pre>
  def stable?
    !(head? || devel?)
  end
    
          puts_columns Array(result)
    else
      query = ARGV.first
      rx = query_regexp(query)
      local_results = search_formulae(rx)
      puts_columns(local_results)
      tap_results = search_taps(rx)
      puts_columns(tap_results)
    
      context 'successful dry runs' do
    before do
      stub_request(:get, 'http://xkcd.com/').
        with(:headers => {'Accept-Encoding'=>'gzip,deflate', 'User-Agent'=>'Huginn - https://github.com/huginn/huginn'}).
        to_return(:status => 200, :body => File.read(Rails.root.join('spec/data_fixtures/xkcd.html')), :headers => {})
    end
    
      it 'asks to accept conflicts when the scenario was modified' do
    DefaultScenarioImporter.seed(user)
    agent = user.agents.where(name: 'Rain Notifier').first
    agent.options['expected_receive_period_in_days'] = 9001
    agent.save!
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'data/default_scenario.json'))
    click_on 'Start Import'
    expect(page).to have_text('This Scenario already exists in your system.')
    expect(page).to have_text('9001')
    check('I confirm that I want to import these Agents.')
    click_on 'Finish Import'
    expect(page).to have_text('Import successful!')
  end
    
        it 'should generate the correct last checkpoint url' do
      @checker.options['path'] = 'last_checkpoint/usps/9361289878905919630610'
      expect(@checker.send(:event_url)).to eq('https://api.aftership.com/v4/last_checkpoint/usps/9361289878905919630610')
    end
  end
    
      prepend Compat
end

    
      ruby_version_is '2.6' do
    it 'raises RuntimeError when `exception: true` is given and the command exits with a non-zero exit status' do
      lambda { @object.system(ruby_cmd('exit 1'), exception: true) }.should raise_error(RuntimeError)
    end
    
      it 'raises an ArgumentError if there is no catch block for the symbol' do
    lambda { throw :blah }.should raise_error(ArgumentError)
  end
    
          def versions
        i = @versions.size + 1
        @versions.map do |v|
          i -= 1
          { :id        => v.id,
            :id7       => v.id[0..6],
            :num       => i,
            :selected  => @page.version.id == v.id,
            :author    => v.author.name.respond_to?(:force_encoding) ? v.author.name.force_encoding('UTF-8') : v.author.name,
            :message   => v.message.respond_to?(:force_encoding) ? v.message.force_encoding('UTF-8') : v.message,
            :date      => v.authored_date.strftime('%B %d, %Y'),
            :gravatar  => Digest::MD5.hexdigest(v.author.email.strip.downcase),
            :identicon => self._identicon_code(v.author.email),
            :date_full => v.authored_date,
          }
        end
      end
    
          # Finds header node inside Nokogiri::HTML document.
      #
      def find_header_node(doc)
        case @page.format
          when :asciidoc
            doc.css('div#gollum-root > h1:first-child')
          when :org
            doc.css('div#gollum-root > p.title:first-child')
          when :pod
            doc.css('div#gollum-root > a.dummyTopAnchor:first-child + h1')
          when :rest
            doc.css('div#gollum-root > div > div > h1:first-child')
          else
            doc.css('div#gollum-root > h1:first-child')
        end
      end
    
        # Title is based on file name when h1_title is false.
    actual = @view.title
    assert_equal 'H1', title
  end
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

    
      s.test_files = s.files.select { |path| path =~ /^test\/test_.*\.rb/ }
end

    
      it 'ignores single-line arrays' do
    expect_no_offenses('[a, b, c]')
  end
    
        context 'but no comment after the last element' do
      it 'autocorrects the closing brace' do
        new_source = autocorrect_source(source)
    
    module RuboCop
  module AST
    # A node extension for `def` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `def` nodes within RuboCop.
    class DefNode < Node
      include ParameterizedNode
      include MethodIdentifierPredicates
    
          # Checks whether the `for` node has a `do` keyword.
      #
      # @return [Boolean] whether the `for` node has a `do` keyword
      def do?
        loc.begin && loc.begin.is?('do')
      end
    
          private_constant :HashElementDelta
    end
  end
end

    
          # Returns the index of the `when` branch within the `case` statement.
      #
      # @return [Integer] the index of the `when` branch
      def branch_index
        parent.when_branches.index(self)
      end
    
    # The project root directory
$root = ::File.dirname(__FILE__)
    
            Dir.chdir(includes_dir) do
          choices = Dir['**/*'].reject { |x| File.symlink?(x) }
          if choices.include?(file)
            source = File.read(file)
            partial = Liquid::Template.parse(source)
            context.stack do
              rtn = rtn + partial.render(context)
            end
          else
            rtn = rtn + 'Included file '#{file}' not found in _includes directory'
          end
        end
      end
      rtn
    end
  end
    
        def render(context)
      code_dir = (context.registers[:site].config['code_dir'].sub(/^\//,'') || 'downloads/code')
      code_path = (Pathname.new(context.registers[:site].source) + code_dir).expand_path
      file = code_path + @file