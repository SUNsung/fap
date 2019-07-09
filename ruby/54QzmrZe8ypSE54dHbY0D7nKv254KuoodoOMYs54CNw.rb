
        
            expect(page).to have_text('Test Trigger Agent')
  end
    
      it 'imports a scenario that does not exist yet' do
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'data/default_scenario.json'))
    click_on 'Start Import'
    expect(page).to have_text('This scenario has a few agents to get you started. Feel free to change them or delete them as you see fit!')
    expect(page).not_to have_text('This Scenario already exists in your system.')
    check('I confirm that I want to import these Agents.')
    click_on 'Finish Import'
    expect(page).to have_text('Import successful!')
  end
    
        it 'works for running jobs' do
      job.locked_at = Time.now
      job.locked_by = 'test'
      expect(status(job)).to eq('<span class='label label-info'>running</span>')
    end
    
        it 'returns true if a ShellCommandAgent is present' do
      valid_parsed_data[:agents][0][:type] = 'Agents::ShellCommandAgent'
      expect(ScenarioImport.new(:data => valid_parsed_data.to_json)).to be_dangerous
    end
  end
    
    describe AgentLog do
  describe 'validations' do
    before do
      @log = AgentLog.new(:agent => agents(:jane_website_agent), :message => 'The agent did something', :level => 3)
      expect(@log).to be_valid
    end
    
        def log_status(status)
      puts bold status
    end
    
      # Compress JavaScripts and CSS.
  config.assets.js_compressor = :uglifier
  # config.assets.css_compressor = :sass
    
      class SendPrivate < Base
    def perform(*_args)
      # don't federate in cucumber
    end
  end
    
        it 'generates a jasmine fixture', :fixture => true do
      contact = alice.contact_for(bob.person)
      aspect = alice.aspects.create(:name => 'people')
      contact.aspects << aspect
      contact.save
      get :new, params: {person_id: bob.person.id}
      save_fixture(html_for('body'), 'status_message_new')
    end
  end
end

    
        context 'on my own post' do
      it 'succeeds' do
        @target = alice.post :status_message, text: 'AWESOME', to: @alices_aspect.id
        post :create, params: like_hash, format: :json
        expect(response.code).to eq('201')
      end
    end
    
      describe '#index' do
    before do
      @post = FactoryGirl.create(:status_message)
      @notification = FactoryGirl.create(:notification, recipient: alice, target: @post)
    end
    
          it 'federates' do
        allow_any_instance_of(Participation::Generator).to receive(:create!)
        expect(Diaspora::Federation::Dispatcher).to receive(:defer_dispatch)
        post_request!
      end
    
    def blog_url(user, project, source_dir)
  cname = '#{source_dir}/CNAME'
  url = if File.exists?(cname)
    'http://#{IO.read(cname).strip}'
  else
    'http://#{user.downcase}.github.io'
  end
  url += '/#{project}' unless project == ''
  url
end
    
        def get_cache_file_for(gist, file)
      bad_chars = /[^a-zA-Z0-9\-_.]/
      gist      = gist.gsub bad_chars, ''
      file      = file.gsub bad_chars, ''
      md5       = Digest::MD5.hexdigest '#{gist}-#{file}'
      File.join @cache_folder, '#{gist}-#{file}-#{md5}.cache'
    end
    
    module Jekyll
    
        output_check(output_path)
    
        # easy_install will put stuff in @tmpdir/packagename/, so find that:
    #  @tmpdir/somepackage/setup.py
    dirs = ::Dir.glob(File.join(target, '*'))
    if dirs.length != 1
      raise 'Unexpected directory layout after easy_install. Maybe file a bug? The directory is #{build_path}'
    end
    return dirs.first
  end # def download
    
        safesystem('tar', *args)
    
        # use dir to set stuff up properly, mainly so I don't have to reimplement
    # the chdir/prefix stuff special for zip.
    dir = convert(FPM::Package::Dir)
    if attributes[:chdir]
      dir.attributes[:chdir] = File.join(build_path, attributes[:chdir])
    else
      dir.attributes[:chdir] = build_path
    end
    
          header = ::Gem::Package::TarHeader.new(:name => name, :mode => mode,
                                             :size => 0, :typeflag => '2',
                                             :linkname => target,
                                             :prefix => prefix,
                                             :mtime => Time.now).to_s
    
          expect('.position-all').to have_ruleset(ruleset)
    end
  end
    
      context 'called with two sizes' do
    it 'applies to height and width' do
      rule = 'height: 2em; width: 1em;'
    
    require 'capybara/cucumber'
require 'capybara/spec/test_app'
    
      it 'should be false for disabled buttons by default' do
    expect(@session).not_to have_button('Disabled button')
  end
    
    # Here's our ActiveRecord class
class Repository < ActiveRecord::Base
  # This will be called by a worker when a job needs to be processed
  def self.perform(id, method, *args)
    find(id).send(method, *args)
  end
    
          # The number of failures.
      def self.count(queue = nil, class_name = nil)
        0
      end
    
          def save
        data = {
          :failed_at => Time.now.strftime('%Y/%m/%d %H:%M:%S %Z'),
          :payload   => payload,
          :exception => exception.class.to_s,
          :error     => UTF8Util.clean(exception.to_s),
          :backtrace => filter_backtrace(Array(exception.backtrace)),
          :worker    => worker.to_s,
          :queue     => queue
        }
        data = Resque.encode(data)
        data_store.push_to_failed_queue(data,Resque::Failure.failure_queue_name(queue))
      end
    
      def failed_date_format
    '%Y/%m/%d %T %z'
  end
    
        # Enables GC Optimizations if you're running REE.
    # http://www.rubyenterpriseedition.com/faq.html#adapt_apps_for_cow
    def enable_gc_optimizations
      if GC.respond_to?(:copy_on_write_friendly=)
        GC.copy_on_write_friendly = true
      end
    end
    
    Then /^I should see the content '([^']*)'$/ do |content|
  expect(page).to have_css '#active_admin_content', text: content
end
    
        def self.register(view_hash)
      view_hash.each do |view_key, view_class|
        super view_key, view_class
        add_writer(view_key)
        send '#{view_key}=', view_class
      end
    end
    
          # Override the default to_s to include a closing form tag
      def to_s
        content + closing_form_tag
      end
    
    # Add a setting to the application to configure the ability
ActiveAdmin::Application.inheritable_setting :cancan_ability_class, 'Ability'