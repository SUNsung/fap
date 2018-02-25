    # This setting makes it so that network access from inside the vagrant guest
    # is able to resolve DNS using the hosts VPN connection.
    v.customize ['modifyvm', :id, '--natdnshostresolver1', 'on']
  end
    
    end

    
      def version
    object.metadata.version
  end
    
      describe :split_keywords do
    context 'only commas' do
      let(:keywords) { 'One,Two, Three, Four Token,' }
    
    module Fastlane
  class CrashlyticsProjectParser
    # @param project_file_path path to a .xcodeproj file
    def initialize(config = {})
      FastlaneCore::Project.detect_projects(config)
      @project = FastlaneCore::Project.new(config, xcodebuild_list_silent: true, xcodebuild_suppress_stderr: true)
    
          it 'gets the correct version number for 'SampleProject_tests'' do
        result = Fastlane::FastFile.new.parse('lane :test do
          get_version_number(xcodeproj: '.xcproject', target: 'SampleProject_tests')
        end').runner.execute(:test)
        expect(result).to eq('1.0')
      end
    
            it 'returns true' do
          result = Fastlane::FastFile.new.parse('lane :test do
            git_tag_exists(tag: '1.2.0')
          end').runner.execute(:test)
    
            expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::VERSION_NUMBER]).to match(/cd .* && agvtool new-marketing-version 1.1.0/)
      end
    
        def as_json
      indexed_docs.map do |doc|
        json = doc.as_json
        json[:mtime] = doc_mtime(doc)
        json[:db_size] = doc_db_size(doc)
        json
      end
    end
    
          unless root?
        raise Invalid, 'missing name' if !name || name.empty?
        raise Invalid, 'missing path' if !path || path.empty?
        raise Invalid, 'missing type' if !type || type.empty?
      end
    end
    
        def subpath_to(url, options = nil)
      url = self.class.parse(url)
      return unless origin == url.origin
    
              # Underscore methods
          if name.start_with?('Underscore')
            node.at_css('~ ul').css('li').each do |li|
              name = [type.downcase, li.at_css('a').content.split.first].join('.')
              id = name.parameterize
              li['id'] = id
              entries << [name, id, type]
            end
            next
          end
    
    File.readlines(sitelist).each do |site|
  site.strip!
  next if site.length == 0
  next if site =~ /^#/
    
    asm = nil
File.open('h2b.com.dbg.in', 'rb') { |fd|
	asm = fd.read(fd.stat.size)
}
    
    keytoolOpts 	= ['-genkey', '-alias', 'signFiles', '-keystore', 'msfkeystore',
		   '-storepass', 'msfstorepass', '-dname', 'cn=#{certCN}',
		   '-keypass', 'msfkeypass']
    
    		end
	end
    
      def default_metadata
    @factory.build(:default_metadata).all
  end