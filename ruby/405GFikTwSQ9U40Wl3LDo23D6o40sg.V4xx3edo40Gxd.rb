
        
            it 'defauls foreground and background colors' do
      scenario.tag_fg_color = nil
      scenario.tag_bg_color = nil
      expect(style_colors(scenario)).to eq('color:#FFFFFF;background-color:#5BC0DE')
    end
  end
    
      describe '#value_at' do
    it 'returns the value at a JSON path' do
      expect(Utils.value_at({ :foo => { :bar => :baz }}.to_json, 'foo.bar')).to eq('baz')
      expect(Utils.value_at({ :foo => { :bar => { :bing => 2 } }}, 'foo.bar.bing')).to eq(2)
      expect(Utils.value_at({ :foo => { :bar => { :bing => 2 } }}, 'foo.bar[?(@.bing == 2)].bing')).to eq(2)
    end
    
      let :valid_options do
    {
      'name' => 'XKCD',
      'expected_update_period_in_days' => '2',
      'type' => 'html',
      'url' => '{{ url | default: 'http://xkcd.com/' }}',
      'mode' => 'on_change',
      'extract' => old_extract,
      'template' => old_template
    }
  end
    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
        context 'with a box name accidentally set as a URL' do
      it 'displays a warning to the user' do
        box_path = iso_env.box2_file(:virtualbox)
        port = 9999
    
          # Returns the SSH info for accessing the Container.
      def ssh_info
        # If the container isn't running, we can't SSH into it
        return nil if state.id != :running
    
        it 'should handle forks gracefully', :skip_windows do
      # Doesn't need to be tested on Windows since Windows doesn't
      # support fork(1)
      allow(machine).to receive(:action) do |action, opts|
        pid = fork
        if !pid
          # Child process
          exit
        end
    
            # Success, exit status 0
        0
      end
    end
  end
end

    
        Feature5079 = '[ruby-core:38404]'
    
    testdata( File.dirname($0) + '/scandata', ARGV ).each do |file|
  $stderr.print File.basename(file) + ': '
  begin
    ok = File.read(file)
    s = Racc::GrammarFileScanner.new( ok )
    sym, (val, _lineno) = s.scan
    if printonly then
      $stderr.puts
      $stderr.puts val
      next
    end
    
        assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.sin('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.cos('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.tan('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.sinh('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.cosh('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.tanh('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.asin('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.atan('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.asinh('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.acosh('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.atanh('0') }
  end
    
        gz.rewind
    gz.pos.should == 0
    gz.lineno.should == 0
  end
    
    describe 'GzipWriter#write' do
  before :each do
    @data = '12345abcde'
    @zip = [31, 139, 8, 0, 44, 220, 209, 71, 0, 3, 51, 52, 50, 54, 49, 77,
            76, 74, 78, 73, 5, 0, 157, 5, 0, 36, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new ''.b
  end
    
        @inflator.inflate(@zeros) do |chunk|
      @chunks << chunk
      break
    end
    
      desc 'update main and version in bower.json'
  task :generate do
    require 'bootstrap-sass'
    Dir.chdir Bootstrap.gem_path do
      spec       = JSON.parse(File.read 'bower.json')
    
      # Disable Rails's static asset server (Apache or nginx will already do this).
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
      gem.licenses      = ['MIT']
    
        def load_imports
      if options.show_tasks && Rake::Task.task_defined?('load:defaults')
        invoke 'load:defaults'
        set(:stage, '')
        Dir[deploy_config_path].each { |f| add_import f }
      end
    
        def add_cmdline_filter(type, values)
      cmdline_filters << Filter.new(type, values)
    end
    
        def URIEncodePair(cc1, cc2, result, index)
      u = ((cc1 >> 6) & 0xF) + 1;
      w = (cc1 >> 2) & 0xF;
      x = cc1 & 3;
      y = (cc2 >> 6) & 0xF;
      z = cc2 & 63;
      octets = Array.new(4);
      octets[0] = (u >> 2) + 240;
      octets[1] = (((u & 3) << 4) | w) + 128;
      octets[2] = ((x << 4) | y) + 128;
      octets[3] = z + 128;
      return URIEncodeOctets(octets, result, index);
    end
    
          # Extracts title from page if present.
      #
      def page_header_from_content(content)
        doc   = build_document(content)
        title = find_header_node(doc).inner_text.strip
        title = nil if title.empty?
        title
      end
    
    $contexts = []
    
    # external
require 'github/markup'
require 'sanitize'
    
      context 'given a distribution without a META.* file' do
    it 'should package IPC::Session' do
      pending('Disabled on travis-ci because it always fails, and there is no way to debug it?') if is_travis
    
        args = [ '-B', build_path('build-info'), '-c', build_path('comment'), '-d', build_path('description'), '-f', build_path('packlist'), '-I', '/opt/local', '-p', staging_path,  '-U', '#{cwd}/#{name}-#{self.version}-#{iteration}.tgz' ]
    safesystem('pkg_create', *args)
    
      def create_scripts
    if script?(:after_install)
      File.write(File.join(fpm_meta_path, 'after_install'), script(:after_install))
    end
  end
    
    # TODO(sissel): Add dependency checking support.
# IIRC this has to be done as a 'checkinstall' step.
class FPM::Package::Solaris < FPM::Package