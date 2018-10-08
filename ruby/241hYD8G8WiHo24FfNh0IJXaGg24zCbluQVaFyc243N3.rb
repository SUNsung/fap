
        
            def create
      authorize AccountModerationNote, :create?
    
    module Admin
  class ChangeEmailsController < BaseController
    before_action :set_account
    before_action :require_local_account!
    
          @domain_block = DomainBlock.new(resource_params)
    
      def lease_seconds_or_default
    (params['hub.lease_seconds'] || 1.day).to_i.seconds
  end
    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
        def ask(key, default=nil, options={})
      question = Question.new(key, default, options)
      set(key, question)
    end
    
            @response = (gets || '').chomp
      end
    
          def netssh_options
        @netssh_options ||= super.merge(fetch(:ssh_options) || {})
      end
    
    if command? :kicker
  desc 'Launch Kicker (like autotest)'
  task :kicker do
    puts 'Kicking... (ctrl+c to cancel)'
    exec 'kicker -e rake test lib examples'
  end
end
    
          Resque.redis
    end
    
          context 'when the whitelist is a single value' do
        let(:test_file) { File.open(file_path('test.jpeg')) }
    
          it 'follows redirects but still respect the extension_whitelist' do
        expect { uploader.download!('http://www.redirect.com/') }.to raise_error(CarrierWave::IntegrityError)
      end
    
    When /^I delete the datamapper record$/ do
  @instance.destroy
end

    
    Then /^the file at '(.*?)' should be the reverse of the file at '(.*?)'$/ do |one, two|
  File.read(file_path(one)).should == File.read(file_path(two)).reverse
end

    
        def option(name)
      self.uploader_options ||= {}
      self.uploader_options[name] ||= record.class.uploader_option(column, name)
    end