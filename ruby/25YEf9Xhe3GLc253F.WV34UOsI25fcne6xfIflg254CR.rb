
        
                  # Ignore most global objects (found elsewhere)
          if type == 'Global Objects'
            entries << [name, node['id']] if name.start_with?('_') || name == 'global'
            next
          end
    
        it 'acts like #depends_on' do
      f = formula 'foo' do
        url 'foo-1.0'
    
        it 'allows specifying dependencies before certain version' do
      spec.uses_from_macos('foo', before: :high_sierra)
    
        it 'allows specifying deprecated options as a Hash from an Array/String to an Array/String' do
      subject.deprecated_option(['foo1', 'foo2'] => 'bar1', 'foo3' => ['bar2', 'bar3'])
      expect(subject.deprecated_options).to include(DeprecatedOption.new('foo1', 'bar1'))
      expect(subject.deprecated_options).to include(DeprecatedOption.new('foo2', 'bar1'))
      expect(subject.deprecated_options).to include(DeprecatedOption.new('foo3', 'bar2'))
      expect(subject.deprecated_options).to include(DeprecatedOption.new('foo3', 'bar3'))
    end
    
        def quarantine
      return if @quarantine.nil?
      return unless Quarantine.available?
    
          unless system curl_executable, '--silent', '--fail', '--output', '/dev/null', package_url
        package_blob = <<~JSON
          {'name': '#{bintray_package}',
           'public_download_numbers': true,
           'public_stats': true}
        JSON
        curl '--silent', '--fail', '--user', '#{bintray_user}:#{bintray_key}',
             '--header', 'Content-Type: application/json',
             '--data', package_blob, bintray_repo_url
        puts
      end
    
        ohai 'Patching #{name}'
    patches.each(&:apply)
  end
    
        def test_module_const_get_toplevel
      bug12089 = '[ruby-dev:49498] [Bug #12089]'
      name = noninterned_name('A')
      e = assert_not_interned_error(Object, :const_get, name)
      assert_equal(name, e.name)
      assert_not_match(/Object::/, e.message, bug12089)
    end
    
        ScratchPad.record []
    while true
      begin
        ScratchPad << enum.next
      rescue StopIteration
        break
      end
    end