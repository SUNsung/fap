
        
        version = ['', 'ext/etc/'].find do |dir|
  begin
    break File.open(File.expand_path('../#{dir}/etc.c', __FILE__)) do |f|
      f.gets '\n#define RUBY_ETC_VERSION '
      f.gets[/'(.+)'/, 1]
    end
  rescue
    next
  end
end
    
        val = '{' + val + '}\n'
    sym == :ACTION  or raise ScanError, 'is not action!'
    val == ok       or raise ScanError, '\n>>>\n#{ok}----\n#{val}<<<'
    
              can_event = 'can_#{@event}?'
    
      private
    
      private