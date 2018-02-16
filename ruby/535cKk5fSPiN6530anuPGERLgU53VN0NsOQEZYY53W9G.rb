
        
          # Finds the groups of the source user, optionally limited to those visible to
  # the current user.
  def execute(current_user = nil)
    segments = all_groups(current_user)
    
        projects
  end
end

    
      module SortableTableHelper
    # :call-seq:
    #   sortable_column(attribute, default_direction = 'desc', name: attribute.humanize)
    def sortable_column(attribute, default_direction = nil, options = nil)
      if options.nil? && (options = Hash.try_convert(default_direction))
        default_direction = nil
      end
      default_direction ||= 'desc'
      options ||= {}
      name = options[:name] || attribute.humanize
      selected = @table_sort_info[:attribute].to_s == attribute
      if selected
        direction = @table_sort_info[:direction]
        new_direction = direction.to_s == 'desc' ? 'asc' : 'desc'
        classes = 'selected #{direction}'
      else
        classes = ''
        new_direction = default_direction
      end
      link_to(name, url_for(sort: '#{attribute}.#{new_direction}'), class: classes)
    end
  end
end

    
      class DummyOutput < String
    alias write concat
  end
  def assert_no_error(*args)
    $stderr, stderr = DummyOutput.new, $stderr
    assert_nothing_raised(*args) {return yield}
  ensure
    stderr, $stderr = $stderr, stderr
    $!.backtrace.delete_if {|e| /\A#{Regexp.quote(__FILE__)}:#{__LINE__-2}/o =~ e} if $!
    assert_empty(stderr)
  end
  alias no_error assert_no_error
    
        # Parses a C prototype signature
    #
    # If Hash +tymap+ is provided, the return value and the arguments from the
    # +signature+ are expected to be keys, and the value will be the C type to
    # be looked up.
    #
    # Example:
    #   require 'fiddle/import'
    #
    #   include Fiddle::CParser
    #     #=> Object
    #
    #   parse_signature('double sum(double, double)')
    #     #=> ['sum', Fiddle::TYPE_DOUBLE, [Fiddle::TYPE_DOUBLE, Fiddle::TYPE_DOUBLE]]
    #
    #   parse_signature('void update(void (*cb)(int code))')
    #     #=> ['update', Fiddle::TYPE_VOID, [Fiddle::TYPE_VOIDP]]
    #
    #   parse_signature('char (*getbuffer(void))[80]')
    #     #=> ['getbuffer', Fiddle::TYPE_VOIDP, []]
    #
    def parse_signature(signature, tymap=nil)
      tymap ||= {}
      case compact(signature)
      when /^(?:[\w\*\s]+)\(\*(\w+)\((.*?)\)\)(?:\[\w*\]|\(.*?\));?$/
        func, args = $1, $2
        return [func, TYPE_VOIDP, split_arguments(args).collect {|arg| parse_ctype(arg, tymap)}]
      when /^([\w\*\s]+[\*\s])(\w+)\((.*?)\);?$/
        ret, func, args = $1.strip, $2, $3
        return [func, parse_ctype(ret, tymap), split_arguments(args).collect {|arg| parse_ctype(arg, tymap)}]
      else
        raise(RuntimeError,'can't parse the function prototype: #{signature}')
      end
    end
    
      DUMMY_SESSION = <<__EOS__
-----BEGIN SSL SESSION PARAMETERS-----
MIIDzQIBAQICAwEEAgA5BCAF219w9ZEV8dNA60cpEGOI34hJtIFbf3bkfzSgMyad
MQQwyGLbkCxE4OiMLdKKem+pyh8V7ifoP7tCxhdmwoDlJxI1v6nVCjai+FGYuncy
NNSWoQYCBE4DDWuiAwIBCqOCAo4wggKKMIIBcqADAgECAgECMA0GCSqGSIb3DQEB
BQUAMD0xEzARBgoJkiaJk/IsZAEZFgNvcmcxGTAXBgoJkiaJk/IsZAEZFglydWJ5
LWxhbmcxCzAJBgNVBAMMAkNBMB4XDTExMDYyMzA5NTQ1MVoXDTExMDYyMzEwMjQ1
MVowRDETMBEGCgmSJomT8ixkARkWA29yZzEZMBcGCgmSJomT8ixkARkWCXJ1Ynkt
bGFuZzESMBAGA1UEAwwJbG9jYWxob3N0MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCB
iQKBgQDLwsSw1ECnPtT+PkOgHhcGA71nwC2/nL85VBGnRqDxOqjVh7CxaKPERYHs
k4BPCkE3brtThPWc9kjHEQQ7uf9Y1rbCz0layNqHyywQEVLFmp1cpIt/Q3geLv8Z
D9pihowKJDyMDiN6ArYUmZczvW4976MU3+l54E6lF/JfFEU5hwIDAQABoxIwEDAO
BgNVHQ8BAf8EBAMCBaAwDQYJKoZIhvcNAQEFBQADggEBACj5WhoZ/ODVeHpwgq1d
8fW/13ICRYHYpv6dzlWihyqclGxbKMlMnaVCPz+4JaVtMz3QB748KJQgL3Llg3R1
ek+f+n1MBCMfFFsQXJ2gtLB84zD6UCz8aaCWN5/czJCd7xMz7fRLy3TOIW5boXAU
zIa8EODk+477K1uznHm286ab0Clv+9d304hwmBZgkzLg6+31Of6d6s0E0rwLGiS2
sOWYg34Y3r4j8BS9Ak4jzpoLY6cJ0QAKCOJCgmjGr4XHpyXMLbicp3ga1uSbwtVO
gF/gTfpLhJC+y0EQ5x3Ftl88Cq7ZJuLBDMo/TLIfReJMQu/HlrTT7+LwtneSWGmr
KkSkAgQApQMCAROqgcMEgcAuDkAVfj6QAJMz9yqTzW5wPFyty7CxUEcwKjUqj5UP
/Yvky1EkRuM/eQfN7ucY+MUvMqv+R8ZSkHPsnjkBN5ChvZXjrUSZKFVjR4eFVz2V
jismLEJvIFhQh6pqTroRrOjMfTaM5Lwoytr2FTGobN9rnjIRsXeFQW1HLFbXn7Dh
8uaQkMwIVVSGRB8T7t6z6WIdWruOjCZ6G5ASI5XoqAHwGezhLodZuvJEfsVyCF9y
j+RBGfCFrrQbBdnkFI/ztgM=
-----END SSL SESSION PARAMETERS-----
__EOS__
    
      if input = opt[:rawdata_input]
    b = open(input) {|f|
      BenchmarkDriver.load(f, File.extname(input)[1..-1], opt)
    }
    b.show_results
  else
    opt[:output] ||= 'bmlog-#{Time.now.strftime('%Y%m%d-%H%M%S')}.#{$$}#{formats[opt[:format]]}'
    BenchmarkDriver.benchmark(opt)
  end
end
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
    class NodeMincerTest < Minitest::Test
  DUMMY_PATH = 'test/dummy_node_mincer'
    
    namespace :bower do
    
        uninstall login_item: 'login item name'
    
      puts 'bundle_id\tapp_name\n'
  puts '--------------------------------------\n'
  puts running.to_a.sort
end
    
    res = ''
doc = Hpricot(File.open(input))
doc.search('//form').each do |form|
    
          # There is only one pattern per run to test
      matched = nil
      matches = nil
    
    #compileOpts = ['']
#outputDir		= system.getProperty('java.io.tmpdir')
outputDir		= 'testoutdir'
compileOpts 	= [ '-target', '1.3', '-source', '1.3', '-d', outputDir ]
    
    unless STDIN.tty?
	p = ::Parser.new('')
	p.parse
	p.dump_all
else
	print 'Tested with:\n'
	print '\tGNU objdump 2.9-aix51-020209\n'
	print '\tGNU objdump 2.15.92.0.2 20040927\n'
	print 'Usage: objdump -dM suffix <file(s)> | ruby objdumptoc.rb\n'
end

    
            def autocorrect(node)
          lambda do |corrector|
            each_unnecessary_space_match(node) do |range|
              corrector.replace(range, ' ')
            end
          end
        end