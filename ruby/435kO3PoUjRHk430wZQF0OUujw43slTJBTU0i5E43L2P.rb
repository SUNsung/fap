
        
          def self.fragment_cache
    @cache ||= DistributedCache.new('am_serializer_fragment_cache')
  end
    
    def grammar(f, out)
  while line = f.gets
    case line
    when %r</\*% *ripper(?:\[(.*?)\])?: *(.*?) *%\*/>
      out << DSL.new($2, ($1 || '').split(',')).generate << $/
    when %r</\*%%%\*/>
      out << '#if 0' << $/
    when %r</\*%>
      out << '#endif' << $/
    when %r<%\*/>
      out << $/
    when /\A%%/
      out << '%%' << $/
      return
    else
      out << line
    end
  end
end
    
      it 'uses '-e' as file' do
    ruby_exe('puts __FILE__', escape: false).chomp.should == '-e'
  end
    
      it 'wraps and unwraps data' do
    a = @s.typed_wrap_struct(1024)
    @s.typed_get_struct(a).should == 1024
  end
    
            @@setup = true
      end
    end
  end
    
      it 'decodes the remaining doubles when passed the '*' modifier after another directive' do
    array = '333333\x15@ffffff\x22@'.unpack(unpack_format()+unpack_format('*'))
    array.should == [5.3, 9.2]
  end
    
      it 'decodes past NULL bytes when passed the '*' modifier' do
    'a\x00b c'.unpack(unpack_format('*')).should == ['a\x00b c']
  end
end
