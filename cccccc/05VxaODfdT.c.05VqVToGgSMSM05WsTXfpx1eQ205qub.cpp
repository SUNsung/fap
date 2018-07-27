
        
        public:
    SectionString(SectionFile* file, Section* parentSection, SectionHeader* sectionHeader, size_t filePosition, MappingType mappingType = mappingParent, size_t size = 0);
    SectionString(SectionFile* file, Section* parentSection, size_t filePosition, MappingType mappingType = mappingParent, size_t size = 0);
    
    // -----------------------------------------------------------------------
// functions exposed by this module
// -----------------------------------------------------------------------
    
    #if 0
    // save a float4 to RAM bypassing the cache ('without polluting the cache')
    void storewithoutcache (float4 * p4) const
    {
        // _mm_stream_ps ((float*) p4, v);
        *p4 = v;
    }
    
        virtual void GetSections(std::map<std::wstring, SectionType, nocase_compare>& /*sections*/)
    {
        assert(false);
        NOT_IMPLEMENTED;
    }
    virtual bool SaveData(size_t /*recordStart*/, const std::map<std::wstring, void*, nocase_compare>& matrices, size_t numRecords, size_t /*datasetSize*/, size_t /*byteVariableSized*/)
    {
        // loop through all the output vectors to copy the data over
        for (auto iter = m_outputs->begin(); iter != m_outputs->end(); ++iter)
        {
            // figure out the dimension of the data
            std::wstring val = iter->first;
            size_t rows = (*m_dimensions)[val];
            // size_t count = rows*numRecords;
    }
    }
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    void WakeUpLock::Unlock() {
    ::wakeupLock_Unlock(object_);
}
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    
    {  protected:
    std::string   m_servicename;
    TServicesMap m_dependservices;
};
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    
/**
 * created on : 2012-07-16
 * author    : yanguoyue
 */