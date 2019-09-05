
        
            def subpath
      @subpath ||= subpath_to(current_url)
    end
    
        def effective_path
      @effective_path ||= effective_url.path
    end
  end
end

    
        def build_page(path)
      response = request_one url_for(path)
      result = handle_response(response)
      yield result if block_given?
      result
    end
    
            css('> .section', '#preamble', 'a[href*='dict.html']', 'code var', 'code strong').each do |node|
          node.before(node.children).remove
        end
    
        it 'creates a muting relation' do
      expect(user.account.muting?(other_account)).to be true
    end
    
      describe 'follow_request' do
    let(:follow_request) { Fabricate(:follow_request, account: sender, target_account: receiver.account) }
    let(:mail) { NotificationMailer.follow_request(receiver.account, Notification.create!(account: receiver.account, activity: follow_request)) }
    
      describe 'GET #show' do
    let(:poll) { Fabricate(:poll, status: Fabricate(:status, visibility: visibility)) }
    
      # The default wrapper to be used by the FormBuilder.
  config.default_wrapper = :default
    
          def remove_page_extentions(page_path)
        Gollum::Markup.formats.values.each do |format|
          page_path = page_path.gsub(/\.#{format[:regexp]}$/, '')
        end
        return page_path
      end
    
      test 'transliteration' do
    # we transliterate only when adapter is grit
    return if defined?(Gollum::GIT_ADAPTER) && Gollum::GIT_ADAPTER != 'grit'
    
    # Run the frontend, based on Sinatra
#
# There are a number of wiki options that can be set for the frontend
#
# Example
# require 'gollum/app'
# Precious::App.set(:wiki_options, {
#     :universal_toc => false,
# }
#
# See the wiki.rb file for more details on wiki options
module Precious
  class App < Sinatra::Base
    register Mustache::Sinatra
    include Precious::Helpers
    
    is_travis = ENV['TRAVIS_OS_NAME'] && !ENV['TRAVIS_OS_NAME'].empty?
    
        it 'should default to native' do
      expected = %x{uname -m}.chomp
      insist { subject.instance_eval { @architecture } } == 'native'
      insist { subject.architecture } == expected
    end
  end
    
      describe '#exclude (internal method)' do
    it 'should obey attributes[:excludes]' do
      File.write(subject.staging_path('hello'), 'hello')
      File.write(subject.staging_path('world'), 'world')
      subject.attributes[:excludes] = ['*world*']
      subject.instance_eval { exclude }
      insist { subject.files } == ['hello']
    end
    
      config.vm.define 'arch' do |arch|
    arch.vm.box = 'jfredett/arch-puppet'
  end
    
      option '--config-files', 'CONFIG_FILES',
    'Mark a file in the package as being a config file. This uses 'conffiles'' \
    ' in debs and %config in rpm. If you have multiple files to mark as ' \
    'configuration files, specify this flag multiple times.  If argument is ' \
    'directory all files inside it will be recursively marked as config files.',
    :multivalued => true, :attribute_name => :config_files
  option '--directories', 'DIRECTORIES', 'Recursively mark a directory as being owned ' \
    'by the package. Use this flag multiple times if you have multiple directories ' \
    'and they are not under the same parent directory ', :multivalued => true,
    :attribute_name => :directories
  option ['-a', '--architecture'], 'ARCHITECTURE',
    'The architecture name. Usually matches 'uname -m'. For automatic values,' \
    ' you can use '-a all' or '-a native'. These two strings will be ' \
    'translated into the correct value for your platform and target package type.'
  option ['-m', '--maintainer'], 'MAINTAINER',
    'The maintainer of this package.',
    :default => '<#{ENV['USER']}@#{Socket.gethostname}>'
  option ['-S', '--package-name-suffix'], 'PACKAGE_NAME_SUFFIX',
    'a name suffix to append to package and dependencies.'
  option ['-e', '--edit'], :flag,
    'Edit the package spec before building.', :default => false
    
        # Get a list of all known package subclasses
    def types
      return @subclasses
    end # def self.types
    
        # Publish the package.
    repo_path = build_path('#{name}_repo')
    safesystem('pkgrepo', 'create', repo_path)
    safesystem('pkgrepo', 'set', '-s', repo_path, 'publisher/prefix=#{attributes[:p5p_publisher]}')
    safesystem('pkgsend', '-s', repo_path,
      'publish', '-d', '#{staging_path}', '#{build_path}/#{name}.p5m')
    safesystem('pkgrecv', '-s', repo_path, '-a',
      '-d', build_path('#{name}.p5p'), name)
    
        self.description = control['pkgdesc'][0]
    
    