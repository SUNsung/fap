
        
              private
    
            a_split.each_with_index { |s, i| a_split[i] = s.to_i unless i == a_length - 1 }
        b_split.each_with_index { |s, i| b_split[i] = s.to_i unless i == b_length - 1 }
    
        def relative_path_to(url)
      url = self.class.parse(url)
      return unless origin == url.origin
    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
            entries
      end
    
      def test_realpath
    Dir.mktmpdir('rubytest-realpath') {|tmpdir|
      realdir = File.realpath(tmpdir)
      tst = realdir + (File::SEPARATOR*3 + '.')
      assert_equal(realdir, File.realpath(tst))
      assert_equal(realdir, File.realpath('.', tst))
      if File::ALT_SEPARATOR
        bug2961 = '[ruby-core:28653]'
        assert_equal(realdir, File.realpath(realdir.tr(File::SEPARATOR, File::ALT_SEPARATOR)), bug2961)
      end
    }
  end
    
      def test_delegate
    d1 = SimpleDelegator.new(t1 = Time.utc(2000))
    d2 = SimpleDelegator.new(t2 = Time.utc(2001))
    assert_equal(-1, t1 <=> t2)
    assert_equal(1, t2 <=> t1)
    assert_equal(-1, d1 <=> d2)
    assert_equal(1, d2 <=> d1)
  end
    
      it 'decodes the number of characters specified by the count modifier' do
    [ ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U1', [0x80]],
      ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U2', [0x80, 0x81]],
      ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U3', [0x80, 0x81, 0x82]]
    ].should be_computed_by(:unpack)
  end
    
    # include would include the module in Object
# extend only extends the `main` object
extend Sinatra::Delegator
    
          def call(env)
        request  = Request.new(env)
        get_was  = handle(request.GET)
        post_was = handle(request.POST) rescue nil
        app.call env
      ensure
        request.GET.replace  get_was  if get_was
        request.POST.replace post_was if post_was
      end
    
      %w(POST PUT DELETE).each do |method|
    it 'denies #{method} requests with non-whitelisted Origin' do
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://malicious.com')).not_to be_ok
    end
    
      # Run specs in random order to surface order dependencies. If you find an
  # order dependency and want to debug it, you can fix the order by providing
  # the seed, which is printed after each run.
  #     --seed 1234
  config.order = :random
    
            def failure_message
          'Should have an attachment named #{@attachment_name}'
        end
    
            protected
    
    module Paperclip
  require 'rails'