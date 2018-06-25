
        
        # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
    def test_dir(*subdirs)
  File.join(TEST_DIR, *subdirs)
end
    
    File.write(config, output)

    
    $LOAD_PATH.unshift File.expand_path('../lib', __dir__)
    
        # Initialize a new Layout.
    #
    # site - The Site.
    # base - The String path to the source.
    # name - The String filename of the post file.
    def initialize(site, base, name)
      @site = site
      @base = base
      @name = name
    
        describe '#revoke!' do
      it 'revokes the key with the client' do
        mock_client_response(:revoke_key!)
    
      def all_projects(current_user)
    projects = []
    
        def boolify(value)
      agent.send(:boolify, value)
    end
    
      def destroy
    @services = current_user.services.find(params[:id])
    @services.destroy
    
        includes, ignores = argv_includes_ignores(ARGV)
    
    class DependencyCollector
  module Compat
    # Define the languages that we can handle as external dependencies.
    LANGUAGE_MODULES = Set[
      :lua, :lua51, :perl, :python, :python3, :ruby
    ].freeze
    
        # Used to prune requirements when calling expand with a block.
    def prune
      throw(:prune, true)
    end
  end
end

    
      def verify_download_integrity(_fn)
    nil
  end
end
    
            def responds?
          methods = @subject.instance_methods.map(&:to_s)
          methods.include?('#{@attachment_name}') &&
            methods.include?('#{@attachment_name}=') &&
            methods.include?('#{@attachment_name}?')
        end
    
    module Paperclip
  require 'rails'
    
    module Paperclip
  # Provides helper methods that can be used in migrations.
  module Schema
    COLUMNS = {:file_name    => :string,
               :content_type => :string,
               :file_size    => :integer,
               :updated_at   => :datetime}