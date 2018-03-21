
        
        # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end

    
            else
          item = Pathutil.new(site.in_source_dir).join(exp)
    
      def failure
    set_flash_message! :alert, :failure, kind: OmniAuth::Utils.camelize(failed_strategy.name), reason: failure_message
    redirect_to after_omniauth_failure_path_for(resource_name)
  end
    
    platforms :jruby do
  gem 'activerecord-jdbc-adapter'
  gem 'activerecord-jdbcsqlite3-adapter'
  gem 'jruby-openssl'
end
    
      # POST /resource/confirmation
  def create
    self.resource = resource_class.send_confirmation_instructions(resource_params)
    yield resource if block_given?
    
      class Worker
    attr_reader :thread, :id, :agent, :config, :mutex, :scheduler, :restarting
    
    def check_link(uri)
  HTTParty.head(uri, :verify => false).code.to_i.tap do |status|
    if (400..422).include?(status)
      if status != 403 && !uri.exclude?('udemy.com')
        raise 'Request had status #{status}'
      else
        putc('S')
      end
    end
  end
end
    
    # nested iterator
def tt
  1.upto(10) {|i|
    yield i
  }
end
    
    $pnum=[]
def setpiece(a,pos)
  if a.length == $p.length then
    $no += 1
    pboard
    return
  end
  while $b[pos] != -1
    pos += 1
  end
  ($pnum - a).each do |i|
    $p[i].each do |x|
      f = 0
      for s in x do
        if $b[pos+s] != -1
          f=1
          break
        end
      end
      if f == 0 then
        for s in x do
          $b[pos+s] = i
        end
        a << i
        setpiece(a.dup, pos)
        a.pop
        for s in x do
          $b[pos+s] = -1
        end
      end
    end
  end
end
    
          expect('.padding-explicit').to have_rule(rule)
    end
  end