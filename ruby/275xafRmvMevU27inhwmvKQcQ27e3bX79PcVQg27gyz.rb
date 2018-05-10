
        
                css('.note h3', '.warning h3').each do |node|
          node.before('<p><strong>#{node.inner_html}</strong></p>').remove
        end
    
          def call
        title('Gems')
        table(all_gem_names) do |gem, row|
          row.yellow if update_available?(gem)
          row << gem
          row << installed_gem_version(gem)
          row << '(update available)' if update_available?(gem)
        end
      end
    
      desc 'Updated'
  task :updated do
  end
    
          describe 'setting an internal role filter' do
        subject { dsl.roles(:app) }
        it 'ignores it' do
          dsl.set :filter, role: :web
          expect(subject.map(&:hostname)).to eq(['example3.com', 'example4.com'])
        end
      end
    
      let(:help_output) do
    out, _err = capture_io do
      flags '--help', '-h'
    end
    out
  end
    
    __END__
    
            if @javascript and not @escaper.respond_to? :escape_javascript
          fail('Use EscapeUtils for JavaScript escaping.')
        end
      end
    
        it 'Reads referrer from Host header when Referer header is missing' do
      env = {'HTTP_HOST' => 'foo.com'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
      %w(POST PUT DELETE).each do |method|
    it 'denies #{method} requests with non-whitelisted Origin' do
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://malicious.com')).not_to be_ok
    end