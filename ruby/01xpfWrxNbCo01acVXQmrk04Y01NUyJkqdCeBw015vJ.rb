
        
            unless formulae.empty?
      # Dump formula list.
      ohai title
      puts_columns(formulae)
    end
  end
    
    html_readme = '<html>#{Kramdown::Document.new(open('README.md').read).to_html}</html>'
readme_doctree = REXML::Document.new(html_readme)
links = REXML::XPath.match(readme_doctree, '//a')
    
      def test_capture3_flip
    o, e, s = Open3.capture3(RUBY, '-e', 'STDOUT.sync=true; 1000.times { print 'o'*1000; STDERR.print 'e'*1000 }')
    assert_equal('o'*1000000, o)
    assert_equal('e'*1000000, e)
    assert(s.success?)
  end
    
    def usercode(f, out)
  require 'erb'
  compiler = ERB::Compiler.new('%-')
  compiler.put_cmd = compiler.insert_cmd = 'out.<<'
  lineno = f.lineno
  src, = compiler.compile(f.read)
  eval(src, binding, f.path, lineno)
end
    
      it 'uses '-e' as file' do
    ruby_exe('puts __FILE__', escape: false).chomp.should == '-e'
  end
    
      it 'returns nil if else-body is empty and expression is false' do
    if false
      123
    else
    end.should == nil
  end
    
    describe :string_unpack_Aa, shared: true do
  it 'decodes the number of bytes specified by the count modifier including NULL bytes' do
    'a\x00bc'.unpack(unpack_format(3)+unpack_format).should == ['a\x00b', 'c']
  end