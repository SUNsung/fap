
        
        end

    
          it 'cuts excessive digits and keeps only 6 ones' do
        format('%f', 1.123456789).should == '1.123457'
      end
    
      it 'sets the tainted bit' do
    o = Object.new
    o.taint
    o.tainted?.should == true
  end
    
        trace_var :$Kernel_trace_var_global do |value|
      captured = value
    end
    
    gem 'rake'
gem 'rack', git: 'https://github.com/rack/rack.git'
gem 'rack-test', '>= 0.6.2'
gem 'minitest', '~> 5.0'
gem 'yard'
    
    <script>
  // reading
  var es = new EventSource('/stream');
  es.onmessage = function(e) { $('#chat').append(e.data + '\n') };
    
        if run? && ARGV.any?
      require 'optparse'
      OptionParser.new { |op|
        op.on('-p port',   'set the port (default is 4567)')                { |val| set :port, Integer(val) }
        op.on('-o addr',   'set the host (default is #{bind})')             { |val| set :bind, val }
        op.on('-e env',    'set the environment (default is development)')  { |val| set :environment, val.to_sym }
        op.on('-s server', 'specify rack server/handler (default is thin)') { |val| set :server, val }
        op.on('-q',        'turn on quiet mode (default is off)')           {       set :quiet, true }
        op.on('-x',        'turn on the mutex lock (default is off)')       {       set :lock, true }
      }.parse!(ARGV.dup)
    end
  end
    
      # fetch data
  fields = {
    :authors => `git shortlog -sn`.force_encoding('utf-8').scan(/[^\d\s].*/),
    :email   => ['mail@zzak.io', 'konstantin.haase@gmail.com'],
    :files   => %w(License README.md Rakefile Gemfile rack-protection.gemspec) + Dir['lib/**/*']
  }
    
            else
          false # Token is malformed
        end
      end
    
          def deny(env)
        warn env, 'attack prevented by #{self.class}'
        [options[:status], {'Content-Type' => 'text/plain'}, [options[:message]]]
      end
    
          def escape_hash(hash)
        hash = hash.dup
        hash.each { |k,v| hash[k] = escape(v) }
        hash
      end