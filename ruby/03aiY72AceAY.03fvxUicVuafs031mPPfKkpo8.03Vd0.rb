
        
              content.scan(/^\s*require (.*)/).each do |current|
        gem_name = current.last
        next if gem_name.include?('.') # these are local gems
        UI.important('You have required a gem, if this is a third party gem, please use `fastlane_require #{gem_name}` to ensure the gem is installed locally.')
      end
    
            cmd << ['-am #{message.shellescape}']
        cmd << '--force' if options[:force]
        cmd << '-s' if options[:sign]
        cmd << tag.shellescape
        cmd << options[:commit].to_s if options[:commit]
    
            message = 'builds/test/#{build_number}#{postfix} (fastlane)'
        tag = 'builds/test/#{build_number}#{postfix}'
        expect(result).to eq('git tag -am #{message.shellescape} #{tag.shellescape}')
      end
    
          it 'adds docset_cert_issuer param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            docset_cert_issuer: 'Some issuer'
          )
        end').runner.execute(:test)
    
            it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add #{path[0]} #{path[1]}', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: #{path})
          end').runner.execute(:test)
        end
      end
    
          it 'generates the correct git command with an array of paths and/or pathspecs' do
        result = Fastlane::FastFile.new.parse('lane :test do
          git_commit(path: ['./fastlane/*.md', './LICENSE'], message: 'message')
        end').runner.execute(:test)
    
    # test monkey patched method on both (simulated) OSes
describe 'monkey patch of String.shellescape (via CrossplatformShellwords)' do
  describe 'on Windows' do
    before(:each) do
      allow(FastlaneCore::Helper).to receive(:windows?).and_return(true)
    end
    
      describe 'converting escaped JSONPath strings' do
    it 'should work' do
      expect(LiquidMigrator.convert_string('Weather looks like <$.conditions> according to the forecast at <$.pretty_date.time>')).to eq(
                                    'Weather looks like {{conditions}} according to the forecast at {{pretty_date.time}}'
      )
    end
    
          it 'makes memory symbol-indifferent before validating' do
        agent = Agents::SomethingSource.new(:name => 'something')
        agent.user = users(:bob)
        agent.memory['bad'] = 2
        agent.save
        expect(agent.memory[:bad]).to eq(2)
      end
    
        # Link new version, if not keg-only
    if Formulary.keg_only?(rack)
      keg.optlink
      puts 'Opt link created for #{keg}'
    else
      puts '#{keg.link} links created for #{keg}'
    end
  end
end

    
      #
  # HTTP POST request class wrapper.
  #
  class Post < Request
    def initialize(uri = '/', proto = DefaultProtocol)
      super('POST', uri, proto)
    end
  end
    
          # If the handler class requires a relative resource...
      if (handler.relative_resource_required?)
        # Substituted the mount point root in the request to make things
        # relative to the mount point.
        request.relative_resource = request.resource.gsub(/^#{root}/, '')
        request.relative_resource = '/' + request.relative_resource if (request.relative_resource !~ /^\//)
      end
    
    module Rex
module Proto
module IPMI
  require 'rex/proto/ipmi/channel_auth_reply'
  require 'rex/proto/ipmi/open_session_reply'
  require 'rex/proto/ipmi/rakp2'
    
              # Decodes the till field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_till(input)
            input.value[0].value
          end
    
              # Decodes the sname field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Model::PrincipalName]
          def decode_sname(input)
            Rex::Proto::Kerberos::Model::PrincipalName.decode(input.value[0])
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::LastReque from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
            title 'Running Inch'
        Rake::Task['inch'].invoke
      end
    end
    
    ; TODO make this stricter if possible
(allow network-outbound)
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
end
    
    Liquid::Template.register_tag('img', Jekyll::ImageTag)

    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end