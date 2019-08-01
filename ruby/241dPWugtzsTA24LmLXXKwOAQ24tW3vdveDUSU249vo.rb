
        
          def test_marshal_load_version_1
    tl = @store.add_file 'file.rb'
    cm = tl.add_class RDoc::NormalClass, 'Klass'
    section = cm.sections.first
    
      def test_flags_normal
    options = {:flags => ['fuzzy']}
    assert_equal <<-'ENTRY', entry('Hello', options).to_s
#, fuzzy
msgid 'Hello'
msgstr ''
    ENTRY
  end
    
        expected =
      doc(
        para('{rdoc-image:path/to/image.jpg}[http://example.com]'))
    
        assert_equal %w[],          @as.each_name_of(0).to_a
    assert_equal %w[],          @as.each_name_of(1).to_a
    assert_equal %w[two],       @as.each_name_of(2).to_a
    assert_equal %w[three],     @as.each_name_of(4).to_a
    assert_equal %w[two three], @as.each_name_of(6).to_a
  end
    
          def redirect(env)
        request = Request.new(env)
        warn env, 'attack prevented by #{self.class}'
        [302, {'Content-Type' => 'text/html', 'Location' => request.path}, []]
      end
    
            modes       = Array options[:escape]
        @escaper    = options[:escaper]
        @html       = modes.include? :html
        @javascript = modes.include? :javascript
        @url        = modes.include? :url