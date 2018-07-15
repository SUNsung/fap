
        
          def self.fragment_cache
    @cache ||= DistributedCache.new('am_serializer_fragment_cache')
  end
    
        context 'Mercurial repository' do
      before do
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_svn?).and_return(false)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git_svn?).and_return(false)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git?).and_return(false)
        expect(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_hg?).and_return(true)
      end
    
          def initialize(pairs = {})
        @pairs = pairs
        pairs.each do |key, value|
          raise 'invalid container key: '#{key.inspect}'' unless VALID_KEYS.include?(key)
          send(:'#{key}=', value)
        end
    
      # Clean the keg of formula @f
  def clean
    ObserverPathnameExtension.reset_counts!
    
      def create_gist(files, description)
    url = 'https://api.github.com/gists'
    data = { 'public' => true, 'files' => files, 'description' => description }
    scopes = GitHub::CREATE_GIST_SCOPES
    GitHub.open_api(url, data: data, scopes: scopes)['html_url']
  end
    
          if tags.include?(:run)
        odeprecated ''depends_on ... => :run''
      end
    
    class PythonRequirement < Requirement
  fatal true
  satisfy do
    odisabled('PythonRequirement', ''depends_on \'python@2\''')
  end
end
    
            # Prints the list of specs & pod cache dirs for a single pod name.
        #
        # This output is valid YAML so it can be parsed with 3rd party tools
        #
        # @param [Array<Hash>] cache_descriptors
        #        The various infos about a pod cache. Keys are
        #        :spec_file, :version, :release and :slug
        #
        def print_pod_cache_infos(pod_name, cache_descriptors)
          UI.puts '#{pod_name}:'
          cache_descriptors.each do |desc|
            if @short_output
              [:spec_file, :slug].each { |k| desc[k] = desc[k].relative_path_from(@cache.root) }
            end
            UI.puts('  - Version: #{desc[:version]}')
            UI.puts('    Type:    #{pod_type(desc)}')
            UI.puts('    Spec:    #{desc[:spec_file]}')
            UI.puts('    Pod:     #{desc[:slug]}')
          end
        end
      end
    end
  end
end

    
    ```
Executable Path: #{actual_path}
```
EOS
      end
    
            self.description = <<-DESC
          Creates a scaffold for the development of a new Pod named `NAME`
          according to the CocoaPods best practices.
          If a `TEMPLATE_URL`, pointing to a git repo containing a compatible
          template, is specified, it will be used in place of the default one.
        DESC