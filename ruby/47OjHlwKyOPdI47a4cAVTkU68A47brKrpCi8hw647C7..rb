
        
        require 'vagrant/action/builtin/mixin_synced_folders'
require 'vagrant/util/busy'
require 'vagrant/util/platform'
    
      def machine_stub(name)
    double(name).tap do |m|
      allow(m).to receive(:id).and_return('foo')
      allow(m).to receive(:reload).and_return(nil)
      allow(m).to receive(:ssh_info).and_return(ssh_info)
      allow(m).to receive(:ui).and_return(iso_env.ui)
      allow(m).to receive(:provider).and_return(double('provider'))
      allow(m).to receive(:state).and_return(double('state', id: :not_created))
      allow(m).to receive(:env).and_return(iso_env)
      allow(m).to receive(:config).and_return(double('config'))
    
          def rsync_pre(machine, opts)
        guest_path = Shellwords.escape(opts[:guestpath])
        machine.communicate.sudo('mkdir -p #{guest_path}')
      end
    
          # Let's now add this box again under a different name, and then
      # verify that we get the proper result back.
      new_box = box_collection.add(box_output_path, 'foo2', '1.0')
      expect(new_box.directory.join('test_file').read).to eq(test_file_contents)
    end
  end
    
      subject { described_class }
    
            context 'machine has download options' do
          before do
            machine.config.vm.box_download_ca_cert = 'oof'
            machine.config.vm.box_download_ca_path = 'rab'
            machine.config.vm.box_download_client_cert = 'zab'
            machine.config.vm.box_download_insecure = false
          end
    
        accounts.each do |acc|
      table << [acc[:authid], acc[:package], acc[:domain], acc[:user], (acc[:password] || '').gsub('\n', '')]
    end
    
        if datastore['URL_TYPE'].eql? 'html'
      urls = extract_pdf_links urls
    
    for segment in macho.segments
  #next if segment.segname == MachO::LoadCommands::SEGMENT_NAMES[:SEG_PAGEZERO]
  puts 'segment: #{segment.segname} off: #{segment.offset.to_s(16)} vmaddr: #{segment.vmaddr.to_s(16)} fileoff: #{segment.fileoff.to_s(16)}'
  for section in segment.sections
    puts 'section: #{section.sectname} off: #{section.offset.to_s(16)} addr: #{section.addr.to_s(16)} size: #{section.size.to_s(16)}'
    flat_addr = section.addr - min
    section_data = data[section.offset, section.size]
    #file_section = section.offset
    #puts 'info: #{segment.fileoff.to_s(16)} #{segment.offset.to_s(16)} #{section.size.to_s(16)} #{file_section.to_s(16)}'
    #puts '?: #{data.size.to_s(16)} #{file_section.to_s(16)}'
    if section_data
      puts 'flat_addr: #{flat_addr.to_s(16)} (#{section_data.size.to_s(16)})'
      if start == -1 or start > flat_addr
        start = flat_addr
      end
      output_data[flat_addr, section_data.size] = section_data
    end
  end
end
    
      #
  # Returns the session type as being 'meterpreter'.
  #
  def self.type
    'meterpreter'
  end
    
      before :each do
    @data = '{'a':1234}'
    @zip = [31, 139, 8, 0, 0, 0, 0, 0, 0, 3, 171, 86, 74, 84, 178, 50,
            52, 50, 54, 169, 5, 0, 196, 20, 118, 213, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new @zip
  end
    
      it 'reads the contents up to a certain size' do
    gz = Zlib::GzipReader.new @io
    gz.read(5).should == @data[0...5]
    gz.read(5).should == @data[5...10]
  end
    
        quarantine! do # https://bugs.ruby-lang.org/issues/13675
      describe 'with nil' do
        it 'does not prepend anything to the stream' do
          @gz.ungetc nil
          @gz.read.should == '12345abcde'
        end
    
      def self.visible(current_user, person, limit=:all, max_time=nil)
    photos = if current_user
               current_user.photos_from(person, limit: limit, max_time: max_time)
             else
               Photo.where(author_id: person.id, public: true)
             end
    photos.where(pending: false).order('created_at DESC')
  end
end

    
      # If they key don't match the current default config keys, a new job has
  # been added, so we nede to regenerate the config to have the new job
  # running
  return false unless current_config.keys == default_job_config.keys
    
      def import
    import_tag_followings
    import_aspects
    import_contacts
    import_posts
    import_relayables
    import_subscriptions
    import_others_relayables
  end
    
        if @contact.present?
      respond_to do |format|
        format.json do
          render json: AspectMembershipPresenter.new(
            AspectMembership.where(contact_id: @contact.id, aspect_id: @aspect.id).first)
          .base_hash
        end
      end
    else
      respond_to do |format|
        format.json do
          render plain: I18n.t('aspects.add_to_aspect.failure'), status: 409
        end
      end
    end
  end
    
        if @aspect.save
      result = {id: @aspect.id, name: @aspect.name}
      if aspecting_person_id.present?
        aspect_membership = connect_person_to_aspect(aspecting_person_id)
        result[:aspect_membership] = AspectMembershipPresenter.new(aspect_membership).base_hash if aspect_membership
      end
    
          # Used for mentions in the publisher and pagination on the contacts page
      format.json {
        @people = if params[:q].present?
                    mutual = params[:mutual].present? && params[:mutual]
                    Person.search(params[:q], current_user, only_contacts: true, mutual: mutual).limit(15)
                  else
                    set_up_contacts_json
                  end
        render json: @people
      }
    end
  end
    
    Gem::Specification.new do |gem|
  gem.name          = 'capistrano'
  gem.version       = Capistrano::VERSION
  gem.authors       = ['Tom Clements', 'Lee Hambley']
  gem.email         = ['seenmyfate@gmail.com', 'lee.hambley@gmail.com']
  gem.description   = 'Capistrano is a utility and framework for executing commands in parallel on multiple remote machines, via SSH.'
  gem.summary       = 'Capistrano - Welcome to easy deployment with Ruby over SSH'
  gem.homepage      = 'http://capistranorb.com/'
    
      def safely_remove_file(_path)
    run_vagrant_command('rm #{test_file}')
  rescue
    VagrantHelpers::VagrantSSHCommandError
  end
end
    
          def ask_question
        $stdout.print question
        $stdout.flush
      end
    
          attr_reader :validators
    
      it 'creates channel with users' do
    chat_channel = ChatChannel.create_with_users([create(:user), create(:user)])
    expect(chat_channel.users.size).to eq(2)
    expect(chat_channel.has_member?(User.first)).to eq(true)
  end
    
        respond_to do |format|
      format.html do
        render template, layout: false
      end
      format.png do
        html = render_to_string(template, formats: :html, layout: false)
        redirect_to HtmlCssToImage.fetch_url(html: html, css: PNG_CSS, google_fonts: 'Roboto|Roboto+Condensed'), status: :found
      end
    end
  end
    
      after :each do
    subject.cleanup
  end
    
      def staging_path(path=nil)
    @staging_path ||= Stud::Temporary.directory('package-#{type}-staging')
    
        platforms.each do |platform|
      logger.info('Generating service manifest.', :platform => platform.class.name)
      platform.program = command.first
      platform.name = attributes[:pleaserun_name]
      platform.args = command[1..-1]
      platform.description = if attributes[:description_given?]
        attributes[:description]
      else
        platform.name
      end
      pleaserun_attributes.each do |attribute_name|
        attribute = 'pleaserun_#{attribute_name}'.to_sym
        if attributes.has_key?(attribute) and not attributes[attribute].nil?
          platform.send('#{attribute_name}=', attributes[attribute])
        end
      end
    
          def translate(key, **options)
        options = options.dup
        options[:default] &&= options[:default].to_s
        message = ::I18n.translate(key, **options)
        message.present? ? message : fallback_message(key, **options)
      end
    
          it 'doesn't make sense using coerce_with' do
        expect do
          subject.params do
            requires :bad, type: JSON, coerce_with: JSON do
              requires :x
            end
          end
        end.to raise_error(ArgumentError)
    
    require 'rainbow/ext/string' unless String.respond_to?(:color)
    
            def document_attribute(names, opts)
          setting = description_field(:params)
          setting ||= description_field(:params, {})
          Array(names).each do |name|
            setting[name[:full_name].to_s] ||= {}
            setting[name[:full_name].to_s].merge!(opts)
    
    Capybara.app = TestApp
    
      it 'should accept the prompt with a response' do
    @session.accept_prompt with: 'the response' do
      @session.click_link('Open prompt')
    end
    expect(@session).to have_xpath('//a[@id='open-prompt' and @response='the response']')
  end
    
      it 'should find the ancestor element using the given locator and options' do
    el = @session.find(:css, '#child')
    expect(el.ancestor('//div', text: 'Ancestor\nAncestor\nAncestor')[:id]).to eq('ancestor3')
  end
    
      it 'should allow regexp matches' do
    expect do
      @session.assert_no_title(/w[a-z]{3}_js/)
    end.to raise_error(Capybara::ExpectationNotMet, 'expected 'with_js' not to match /w[a-z]{3}_js/')
    @session.assert_no_title(/monkey/)
  end