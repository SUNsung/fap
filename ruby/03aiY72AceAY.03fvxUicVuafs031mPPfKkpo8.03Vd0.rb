
        
            option_names.any? do |name|
      if option_defined? 'with-#{name}'
        include? 'with-#{name}'
      elsif option_defined? 'without-#{name}'
        !include? 'without-#{name}'
      else
        false
      end
    end
  end
    
        first_warning = true
    methods.each do |method|
      unless checks.respond_to?(method)
        Homebrew.failed = true
        puts 'No check available by the name: #{method}'
        next
      end
    
      def search
    if ARGV.empty?
      puts_columns Formula.full_names
    elsif ARGV.include? '--macports'
      exec_browser 'https://www.macports.org/ports.php?by=name&substr=#{ARGV.next}'
    elsif ARGV.include? '--fink'
      exec_browser 'http://pdb.finkproject.org/pdb/browse.php?summary=#{ARGV.next}'
    elsif ARGV.include? '--debian'
      exec_browser 'https://packages.debian.org/search?keywords=#{ARGV.next}&searchon=names&suite=all&section=all'
    elsif ARGV.include? '--opensuse'
      exec_browser 'https://software.opensuse.org/search?q=#{ARGV.next}'
    elsif ARGV.include? '--fedora'
      exec_browser 'https://admin.fedoraproject.org/pkgdb/packages/%2A#{ARGV.next}%2A/'
    elsif ARGV.include? '--ubuntu'
      exec_browser 'http://packages.ubuntu.com/search?keywords=#{ARGV.next}&searchon=names&suite=all&section=all'
    elsif ARGV.include? '--desc'
      query = ARGV.next
      rx = query_regexp(query)
      Descriptions.search(rx, :desc).print
    elsif ARGV.first =~ HOMEBREW_TAP_FORMULA_REGEX
      query = ARGV.first
      user, repo, name = query.split('/', 3)
    
      describe '#status' do
    it 'works for failed jobs' do
      job.failed_at = Time.now
      expect(status(job)).to eq('<span class='label label-danger'>failed</span>')
    end
    
      describe '.seed' do
    it 'imports a set of agents to get the user going when they are first created' do
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(7)
    end
    
    describe AgentsExporter do
  describe '#as_json' do
    let(:name) { 'My set of Agents' }
    let(:description) { 'These Agents work together nicely!' }
    let(:guid) { 'some-guid' }
    let(:tag_fg_color) { '#ffffff' }
    let(:tag_bg_color) { '#000000' }
    let(:icon) { 'Camera' }
    let(:source_url) { 'http://yourhuginn.com/scenarios/2/export.json' }
    let(:agent_list) { [agents(:jane_weather_agent), agents(:jane_rain_notifier_agent)] }
    let(:exporter) { AgentsExporter.new(
      agents: agent_list, name: name, description: description,
      source_url: source_url, guid: guid, tag_fg_color: tag_fg_color,
      tag_bg_color: tag_bg_color, icon: icon) }
    
      describe 'cleanup_failed_jobs!' do
    before do
      3.times do |i|
        Delayed::Job.create(failed_at: Time.now - i.minutes)
      end
      @keep = Delayed::Job.order(:failed_at)[1]
    end
    
    class PolymorphicMentions < ActiveRecord::Migration[4.2]
  def change
    remove_index :mentions, column: %i(post_id)
    remove_index :mentions, column: %i(person_id post_id), unique: true
    rename_column :mentions, :post_id, :mentions_container_id
    add_column :mentions, :mentions_container_type, :string
    add_index :mentions,
              %i(mentions_container_id mentions_container_type),
              name:   'index_mentions_on_mc_id_and_mc_type',
              length: {mentions_container_type: 191}
    add_index :mentions,
              %i(person_id mentions_container_id mentions_container_type),
              name:   'index_mentions_on_person_and_mc_id_and_mc_type',
              length: {mentions_container_type: 191},
              unique: true
    
    require 'cucumber/api_steps'
    
      def navigate_to(page_name)
    path = path_to(page_name)
    if path.is_a?(Hash)
      visit(path[:path])
      await_elem = path[:special_elem]
      find(await_elem.delete(:selector), await_elem)
    else
      visit(path)
    end
  end
    
    describe StatusMessagesController, :type => :controller do
  describe '#bookmarklet' do
    before do
      sign_in bob, scope: :user
    end
    
      def test_file_exists(path)
    exists?('f', path)
  end
    
        def top_level_tasks
      if tasks_without_stage_dependency.include?(@top_level_tasks.first)
        @top_level_tasks
      else
        @top_level_tasks.unshift(ensure_stage.to_s)
      end
    end
    
          def has_role?(role)
        roles.include? role.to_sym
      end
    
          def has_footer
        @footer = (@page.footer || false) if @footer.nil? && @page
        !!@footer
      end
    
          def upload_dest
        @upload_dest
      end
    
          def versions
        i = @versions.size + 1
        @versions.map do |v|
          i -= 1
          { :id        => v.id,
            :id7       => v.id[0..6],
            :num       => i,
            :selected  => @page.version.id == v.id,
            :author    => v.author.name.respond_to?(:force_encoding) ? v.author.name.force_encoding('UTF-8') : v.author.name,
            :message   => v.message.respond_to?(:force_encoding) ? v.message.force_encoding('UTF-8') : v.message,
            :date      => v.authored_date.strftime('%B %d, %Y'),
            :gravatar  => Digest::MD5.hexdigest(v.author.email.strip.downcase),
            :identicon => self._identicon_code(v.author.email),
            :date_full => v.authored_date,
          }
        end
      end
    
        get 'A/fc66539528eb96f21b2bbdbf557788fe8a1196ac'
    
      test 'extracting paths from URLs' do
    assert_nil extract_path('Eye-Of-Sauron')
    assert_equal 'Mordor', extract_path('Mordor/Sauron')
    assert_equal 'Mordor/Sauron', extract_path('Mordor/Sauron/Evil')
  end
    
        def sanitize_empty_params(param)
      [nil, ''].include?(param) ? nil : CGI.unescape(param)
    end
    
                if page_path.include?('/')
              folder      = page_path.split('/').first
              folder_path = @path ? '#{@path}/#{folder}' : folder
              folder_link = %{<li><a href='#{@base_url}/pages/#{folder_path}/' class='folder'>#{folder}</a></li>}