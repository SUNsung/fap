
        
        get '/' do
  halt erb(:login) unless params[:user]
  erb :chat, :locals => { :user => params[:user].gsub(/\W/, '') }
end
    
    namespace :doc do
  task :readmes do
    Dir.glob 'lib/rack/protection/*.rb' do |file|
      excluded_files = %w[lib/rack/protection/base.rb lib/rack/protection/version.rb]
      next if excluded_files.include?(file)
      doc  = File.read(file)[/^  module Protection(\n)+(    #[^\n]*\n)*/m].scan(/^ *#(?!#) ?(.*)\n/).join('\n')
      file = 'doc/#{file[4..-4].tr('/_', '-')}.rdoc'
      Dir.mkdir 'doc' unless File.directory? 'doc'
      puts 'writing #{file}'
      File.open(file, 'w') { |f| f << doc }
    end
  end
    
            if unmasked_token?(token)
          compare_with_real_token token, session
    
          def call(env)
        status, headers, body = @app.call(env)
        header = options[:report_only] ? 'Content-Security-Policy-Report-Only' : 'Content-Security-Policy'
        headers[header] ||= csp_policy if html? headers
        [status, headers, body]
      end
    end
  end
end

    
          def redirect(env)
        request = Request.new(env)
        warn env, 'attack prevented by #{self.class}'
        [302, {'Content-Type' => 'text/html', 'Location' => request.path}, []]
      end
    
      it 'prevents ajax requests without a valid token' do
    expect(post('/', {}, 'HTTP_X_REQUESTED_WITH' => 'XMLHttpRequest')).not_to be_ok
  end
    
        it 'Returns nil when Referer header is missing and allow_empty_referrer is false' do
      env = {'HTTP_HOST' => 'foo.com'}
      subject.options[:allow_empty_referrer] = false
      expect(subject.referrer(env)).to be_nil
    end
    
        it 'copes with nested arrays' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']['bar']]]
      end
      get '/', :foo => {:bar => '<bar>'}
      expect(body).to eq('&lt;bar&gt;')
    end
    
        context 'with a multi-expression body' do
      let(:source) do
        'class << self; bar; baz; end'
      end
    
            false
      end
    
            def autocorrect(range)
          PunctuationCorrector.swap_comma(range)
        end
    
            it_behaves_like 'nonmatching'
      end
    
              something_else
        RUBY
      end
    end
    
            rhs
      end
    end
  end
end

    
          it { expect(if_node.inverse_keyword).to eq('if') }
    end
    
          # Checks whether the `block` literal is delimited by `do`-`end` keywords.
      #
      # @return [Boolean] whether the `block` literal is enclosed in `do`-`end`
      def keywords?
        loc.end&.is?('end')
      end
    
            self
      end
    
    
#
# Documentation
#
    
    num_workers.times do |num|
  God.watch do |w|
    w.dir      = '#{rails_root}'
    w.name     = 'resque-#{num}'
    w.group    = 'resque'
    w.interval = 30.seconds
    w.env      = {'QUEUE'=>'critical,high,low', 'RAILS_ENV'=>rails_env}
    w.start    = '/usr/bin/rake -f #{rails_root}/Rakefile environment resque:work'
    
          def self.each(offset = 0, limit = self.count, queue = :failed, class_name = nil, order = 'desc')
        items = all(offset, limit, queue)
        items = [items] unless items.is_a? Array
        reversed = false
        if order.eql? 'desc'
          items.reverse!
          reversed = true
        end
        items.each_with_index do |item, i|
          if !class_name || (item['payload'] && item['payload']['class'] == class_name)
            id = reversed ? (items.length - 1) + (offset - i) : offset + i
            yield id, item
          end
        end
      end
    
          failure_hooks(plugin).each do |hook|
        if hook.to_s.end_with?('failure')
          raise LintError, '#{plugin}.#{hook} is not namespaced'
        end
      end
    end
    
      def failed_end_at
    if failed_start_at + failed_per_page > failed_size
      failed_size
    else
      failed_start_at  + failed_per_page - 1
    end
  end
    
        # What time did this worker start? Returns an instance of `Time`
    def started
      data_store.worker_start_time(self)
    end